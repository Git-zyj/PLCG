/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7615
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2]))) : (var_4))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1])))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) >= (536805376)));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (int i_3 = 2; i_3 < 14; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_4 [i_1]))));
                    arr_11 [i_2] [i_2] [3ULL] = ((((/* implicit */int) arr_8 [i_2 + 2] [i_2 - 1] [i_3 - 1] [i_2 - 1])) | (((/* implicit */int) arr_3 [i_1] [i_1])));
                }
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (short)-13774))));
                arr_12 [(signed char)13] [i_2] [i_2] [i_3 + 1] = ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_3 [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) arr_4 [i_1])));
            }
            for (int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_18 [i_1] [i_2] [i_1] [i_6] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) -536805377)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)117))));
                    /* LoopSeq 3 */
                    for (short i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */signed char) (+(-536805380)));
                        var_22 = ((/* implicit */unsigned long long int) (short)13774);
                        arr_21 [i_2] [i_2] [i_2] [i_6] [11] = ((/* implicit */_Bool) var_14);
                    }
                    for (short i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
                    {
                        arr_26 [i_1] [i_1] [i_1] [i_2] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_1] [i_8] [i_2 + 1] [i_8])) > (((((/* implicit */int) (unsigned short)40151)) ^ (((/* implicit */int) (unsigned char)0))))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (0ULL)));
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (unsigned short)63753))));
                        var_25 = ((/* implicit */unsigned short) ((2147483647) <= (((/* implicit */int) (short)32757))));
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 3) 
                    {
                        arr_30 [i_2] [i_2 - 1] [i_2] = ((/* implicit */short) arr_8 [i_9] [i_2] [i_1] [i_6]);
                        var_26 = ((/* implicit */unsigned char) var_5);
                    }
                }
                for (int i_10 = 2; i_10 < 11; i_10 += 3) 
                {
                    arr_33 [i_2] [i_2 - 1] [i_5] [i_2 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) 536805376))));
                    arr_34 [i_2] [i_2] = ((/* implicit */int) arr_25 [i_10] [i_2] [i_10 + 3] [i_10 + 1] [i_2 + 2]);
                    arr_35 [i_1] [i_2] [i_2] [(short)0] [(signed char)6] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) var_13)) + (((/* implicit */int) (short)-7569)))));
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(signed char)4] [i_2] [i_10 + 2] [i_10 + 2] [i_2])) ? (((/* implicit */int) arr_25 [i_1] [i_2] [i_1] [i_1] [i_5])) : ((+(((/* implicit */int) (short)32757))))));
                }
                for (signed char i_11 = 1; i_11 < 13; i_11 += 1) 
                {
                    arr_40 [i_1] [i_2] [i_5] [i_11 - 1] [i_2] [i_11 + 1] = ((/* implicit */_Bool) arr_28 [i_2] [i_11 + 2] [i_1] [i_2 + 1] [i_11 + 1]);
                    arr_41 [i_1] [i_2] [i_2] [4LL] = ((/* implicit */short) (~(arr_10 [i_2] [i_2] [i_11 + 1] [i_11] [i_2] [i_2 + 1])));
                    arr_42 [i_2] [i_2] = ((/* implicit */_Bool) 2363432150254240048LL);
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (~(((/* implicit */int) ((signed char) (unsigned short)63745))))))));
                }
                arr_43 [i_1] [i_2 + 1] [i_5] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_31 [i_2 + 2] [i_2]))));
            }
            for (signed char i_12 = 3; i_12 < 13; i_12 += 4) 
            {
                arr_48 [i_1] [i_2] [(unsigned char)4] [(unsigned char)4] = ((/* implicit */int) ((short) 634141728));
                arr_49 [i_2] [i_2] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_12 - 3] [i_2 + 1]))));
                arr_50 [i_1] [i_2 + 2] [i_2] [i_12] = ((/* implicit */int) var_7);
                arr_51 [i_1] [i_2] [i_2] [i_2 + 2] = ((/* implicit */_Bool) ((signed char) (short)-14));
                var_29 = ((/* implicit */signed char) ((unsigned char) 16539246404870831662ULL));
            }
            var_30 = ((/* implicit */long long int) ((arr_36 [i_2] [i_2 - 1]) ? (((/* implicit */int) arr_36 [i_2] [i_2 - 1])) : (((/* implicit */int) arr_36 [i_2] [i_2 + 2]))));
        }
        var_31 = arr_32 [i_1] [i_1] [i_1];
    }
    for (signed char i_13 = 1; i_13 < 6; i_13 += 4) 
    {
        var_32 = ((/* implicit */unsigned char) 4096U);
        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) min((((/* implicit */int) arr_25 [i_13 + 2] [(unsigned char)10] [i_13] [i_13] [i_13 + 4])), (((((/* implicit */_Bool) arr_15 [i_13] [i_13 + 3] [0ULL] [i_13])) ? (arr_15 [i_13] [i_13 + 4] [(unsigned char)10] [i_13 + 4]) : (975462850))))))));
    }
    var_34 = ((/* implicit */_Bool) var_0);
}
