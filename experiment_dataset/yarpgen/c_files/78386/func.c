/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78386
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
    var_17 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_1] |= ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 4])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        arr_11 [14LL] [8ULL] [14LL] [(unsigned char)10] [14LL] [23U] |= ((unsigned int) arr_5 [i_0 + 2]);
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */_Bool) (-(arr_4 [i_0 - 1] [i_1 - 2] [i_2 - 2])));
                            var_19 = ((/* implicit */unsigned int) arr_5 [i_4]);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                        {
                            arr_17 [i_5] [i_5] [i_2] [i_3] [i_2] = arr_13 [i_0] [i_1 - 2] [i_2 + 4] [(signed char)22] [2U];
                            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(var_3)))) <= (((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4)))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [(signed char)17] [i_1] [1LL] [i_0] = ((/* implicit */signed char) (unsigned short)3968);
                            arr_21 [i_6] [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [17U]))));
                            arr_22 [i_0] [i_0] [9U] [i_3] [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1] [i_2])) || ((!(((/* implicit */_Bool) 6620947003186053222LL))))));
                            arr_23 [i_0] [i_1] [18ULL] [i_2] [i_3] [9] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(unsigned short)21])) || (((/* implicit */_Bool) arr_16 [i_0] [i_0 + 2] [i_2] [i_3 + 1] [i_6]))));
                            var_21 = ((/* implicit */long long int) ((int) arr_19 [i_0 + 1] [i_1 - 4] [i_0 + 1] [i_2 - 1] [i_3 + 2]));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
                        {
                            arr_26 [(unsigned short)4] [i_1] [i_7] [i_7] [i_7] [(unsigned char)9] |= ((/* implicit */unsigned long long int) ((signed char) (~(2164401997U))));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)17] = ((/* implicit */unsigned int) arr_18 [i_0 - 2]);
                        }
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_2 + 2] [i_1 - 3])) != ((+(((/* implicit */int) arr_14 [i_1] [i_1]))))));
                        var_23 = ((/* implicit */long long int) (~(arr_25 [i_0] [i_1 - 1] [i_0] [8LL] [i_3 + 1] [i_3 + 1])));
                    }
                    var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_0] [i_0] [i_0]))) < (((arr_10 [i_2] [i_1] [22U] [22U]) << (((/* implicit */int) arr_2 [i_2] [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 23; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            {
                                var_25 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) 4)) / (38381302U)));
                                arr_35 [i_9] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) -583421408);
                                var_26 |= ((/* implicit */_Bool) arr_15 [4ULL] [(signed char)20] [(signed char)20] [13U] [i_0]);
                                arr_36 [(signed char)6] [(signed char)6] [(signed char)6] [i_1] = ((/* implicit */int) arr_25 [i_0] [1U] [(short)4] [(short)1] [1U] [1U]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) var_0);
}
