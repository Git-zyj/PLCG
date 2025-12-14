/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76987
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
    var_13 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)30397))) ^ (var_9)));
    var_14 -= ((/* implicit */signed char) var_3);
    var_15 = ((/* implicit */signed char) (_Bool)0);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) 17132293543373936963ULL);
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned char) 2919816322U);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            arr_16 [2U] [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (~(8411533148515422356ULL)));
                            arr_17 [i_0] [i_3] [15ULL] [i_3] [i_3] [i_0] [i_3] = ((/* implicit */unsigned long long int) (-((-(var_6)))));
                            var_18 = ((/* implicit */short) (+(8411533148515422356ULL)));
                        }
                    }
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)5162))) == (4048290275U))))) ? (max((arr_1 [i_2]), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) var_6))));
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            var_19 = (signed char)-11;
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_18 [i_2] [i_5] [i_2] [i_1] [i_2]))));
                            var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */int) ((unsigned char) (+(10035210925194129259ULL))))) : (((/* implicit */int) ((unsigned short) 10035210925194129259ULL)))));
                            var_22 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1681681988050639373ULL))))) : ((+(((/* implicit */int) arr_0 [i_0]))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((((/* implicit */_Bool) ((short) arr_22 [i_0] [i_0] [i_0] [i_0] [i_7]))) ? (max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_2] [(signed char)9] [i_0])), (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3696009353605557097ULL)) ? (738246957U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                            arr_26 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((long long int) min(((signed char)-98), ((signed char)-31))))));
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-65)) < (((/* implicit */int) arr_23 [i_0] [i_5] [i_2] [i_2] [i_8]))))) > (((/* implicit */int) arr_7 [i_0] [i_5] [i_2]))));
                            var_25 = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (signed char)10)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (2U))))));
                        }
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_1] [(signed char)5] [i_2] [(signed char)5])) ? ((-(-6863227183968810139LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_5] [i_0] [i_5]))))))))));
                    }
                    var_27 *= ((/* implicit */unsigned long long int) ((unsigned int) (((~(arr_15 [i_0] [i_0] [i_1] [i_1] [i_1] [i_0] [(unsigned char)4]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-21708)) : (((/* implicit */int) arr_14 [i_2] [i_1] [i_1] [i_1] [i_2] [i_2] [i_2]))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 1; i_9 < 22; i_9 += 4) 
                    {
                        var_28 = ((/* implicit */short) ((var_1) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_0] [7LL] [i_9 + 1] [i_9 - 1] [i_2])))))));
                        var_29 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 4759847674775812927LL)) ? (((/* implicit */int) (short)14451)) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_2] [i_9]))))));
                    }
                    arr_33 [i_0] = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) (signed char)10)), (1125899904745472ULL)))));
                }
            }
        } 
    } 
}
