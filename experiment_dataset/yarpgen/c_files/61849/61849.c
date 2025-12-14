/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_12 ^= (((max((120 ^ 15909866616546901201), (2536877457162650414 & 18494))) % (~-var_10)));
                arr_7 [i_0] [i_0] = ((((((-68 | 120) < (max(0, var_4))))) < 47042));
                var_13 = (((max(15909866616546901201, 3120490726065052992)) & ((max(((~(arr_6 [i_0] [i_1] [i_0]))), ((-(arr_4 [i_0] [i_0] [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_14 += (((((min((arr_0 [i_2]), (max(14, (arr_1 [i_2] [i_1]))))))) / (((((arr_9 [i_0] [i_2] [14] [i_0]) ? 15909866616546901189 : 18446744073709551608)) * ((((arr_0 [i_2]) ? (arr_2 [i_2]) : -1)))))));
                            var_15 = max((max((98 % 1), (max(7474835554474366971, 0)))), ((((arr_1 [i_0] [i_0]) + var_2))));
                            arr_15 [i_0] [i_0] [i_1] [i_0] [i_3] [i_3] = ((max((arr_3 [i_0] [i_0]), (max(var_10, (arr_4 [i_0] [i_0] [i_0]))))));
                            arr_16 [i_0] [i_0] [i_0] [22] [i_0] [i_0] = (max((((((arr_12 [i_0] [22]) && -24002)) ? (arr_8 [i_0] [i_3]) : 1)), ((var_2 ? ((((arr_13 [i_0] [i_0] [i_2] [10]) != var_11))) : ((-107 ? 18493 : (arr_12 [i_0] [i_0])))))));
                        }
                    }
                }
            }
        }
    }
    var_16 = ((-(max(0, 47029))));
    var_17 = (((((var_3 ? (48 - var_7) : -var_2))) ? (!-25) : (((((15909866616546901196 ? -49 : var_8))) ? (((15909866616546901199 ? var_1 : -7949877657653374885))) : (max(2536877457162650427, 11))))));
    var_18 *= ((((max((max(var_2, var_1)), var_5))) || var_3));
    #pragma endscop
}
