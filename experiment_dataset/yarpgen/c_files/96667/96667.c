/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((72 ? 3986 : 144115188075854848))) ? (30690 && 15483775527607125610) : (~3536440340))) == var_2));
    var_19 -= ((758526969 && (~61549)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (max((((!((((arr_3 [i_0] [i_1] [i_1]) ? 758526960 : (arr_1 [i_0]))))))), ((~(max(2962968546102426006, 210483295))))));
                var_21 = (((((-41535960 != (arr_2 [i_1])))) >> (!137)));
            }
        }
    }
    var_22 = (51295 / 5498950767573804919);
    #pragma endscop
}
