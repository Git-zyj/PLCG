/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82986
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
    var_10 = ((/* implicit */long long int) (signed char)36);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */long long int) arr_6 [i_1] [i_1] [i_1] [i_1]);
                        var_11 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) var_2))))) ? (((long long int) var_3)) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [16LL] [i_0 - 1]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_4] [i_1] [i_1] [i_1] [i_4] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
                            arr_15 [i_4] = ((/* implicit */unsigned long long int) min(((-(max((((/* implicit */long long int) (short)-32740)), (-5153735425972009910LL))))), (((/* implicit */long long int) (unsigned short)43548))));
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-36)) / (((((/* implicit */int) ((var_5) >= (var_8)))) ^ (arr_5 [i_2] [i_2])))));
                        }
                    }
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 22; i_5 += 2) 
                    {
                        var_13 -= ((short) arr_17 [i_0] [i_1] [i_0] [i_1]);
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)7437))));
                            arr_21 [i_0] [i_1] [i_0] [i_5] [i_6] [i_5] = var_3;
                        }
                        var_15 = ((/* implicit */signed char) (-((~(((/* implicit */int) (signed char)35))))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0 + 1] [i_5] [i_2])) - (((/* implicit */int) ((var_0) <= (((/* implicit */int) arr_7 [i_5] [i_5])))))));
                    }
                    for (int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        var_17 = ((((/* implicit */int) (signed char)-54)) / (((/* implicit */int) (_Bool)1)));
                        var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1])) / (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [13ULL] [i_0]))) / (var_4))))), (((/* implicit */unsigned long long int) (_Bool)0))));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((signed char) (short)0)))));
                    }
                    arr_25 [i_1] [i_0 - 1] = ((/* implicit */short) var_9);
                    var_20 = ((/* implicit */unsigned short) var_5);
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (short)13383)))))));
                }
            } 
        } 
    } 
}
