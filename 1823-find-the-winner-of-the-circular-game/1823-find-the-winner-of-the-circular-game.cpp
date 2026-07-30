class Solution {
public:
/*Josephus (1823)

Base Case:
winner(1) = 0

Recurrence:
winner(i) = (winner(i-1) + k) % i

Intuition:
• After one elimination, the remaining people form the SAME problem with i-1 people.
• Renumber the remaining people starting from the next person.
• The recurrence converts the winner from the renumbered circle back to the original numbering by undoing the shift.
• % wraps the index because the people stand in a circle.*/
    int findTheWinner(int n, int k) 
    {
        int winner=0;
        for(int i=2;i<=n;i++)
        {
            winner=(winner+k)%i;
        }
        return winner+1;
    }
};