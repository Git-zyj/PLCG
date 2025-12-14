/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((!(((~((var_3 ? var_8 : var_9)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 += ((-var_6 & ((~(arr_0 [i_0])))));
        var_12 -= ((~((-26873 ? 145452297898593972 : 14774187713350380958))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_13 = ((!(((((((arr_4 [i_1] [i_1]) + var_9))) ? (var_9 + var_3) : (max(var_5, var_7)))))));
        var_14 *= (max((min((((18228 ? 183 : (arr_4 [i_1] [i_1])))), (4605651331718821217 / -2496364646093140899))), ((((!-1) ? ((((-1803893939 + 2147483647) >> (18301291775810957644 - 18301291775810957627)))) : ((145452297898593971 ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1]))))))));
        var_15 = (min(var_15, (!635264807)));
        var_16 *= (((((((((arr_3 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : 666502872))) * (-27 * 145452297898593960)))) ? ((((var_0 ? (arr_3 [i_1] [i_1]) : 82838191925481597)) & (((var_5 ? 2242 : (arr_4 [i_1] [i_1])))))) : ((((!((min(var_9, (arr_3 [i_1] [i_1]))))))))));
    }
    #pragma endscop
}
