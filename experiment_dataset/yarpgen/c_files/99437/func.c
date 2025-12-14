/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99437
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2 + 1])))))));
                    var_12 = ((/* implicit */unsigned short) ((unsigned char) max((-1375936249010851460LL), (((/* implicit */long long int) (_Bool)1)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((unsigned char) max((var_10), ((signed char)-18)))))));
                        var_14 = ((/* implicit */short) (((+(arr_7 [i_2 + 3] [i_3 + 1] [i_3 + 1]))) % (arr_7 [i_2 + 2] [i_3 + 1] [i_3 + 1])));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                    {
                        var_15 += ((/* implicit */unsigned char) arr_7 [i_2 - 3] [i_2 - 3] [i_2 + 4]);
                        var_16 = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 4] [i_4]))))));
                        var_17 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_4])) && (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) var_7)))))))), (((((/* implicit */_Bool) arr_11 [i_0] [16LL] [i_1] [i_1] [(short)8] [i_4])) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) (unsigned short)33256)))) : (((/* implicit */int) (signed char)47))))));
                        var_18 = ((/* implicit */long long int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))) < (arr_7 [i_2 - 3] [i_2 - 2] [i_2 + 1]))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            var_19 *= ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_2] [i_2 - 1] [i_2 - 4] [i_2 - 3]))));
                            arr_20 [i_6] [i_1] &= var_7;
                        }
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [6LL] [9LL] [i_2] [i_5] [i_0] [i_2 - 1])) ? (929821722) : (((/* implicit */int) var_10)))))));
                            var_21 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-1410)) < (((/* implicit */int) var_8)))) ? (((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) : (-752306582569311971LL))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                            arr_23 [i_7] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (unsigned char)187);
                        }
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) max((390207200922487831LL), (((/* implicit */long long int) (_Bool)1))));
    var_23 &= ((/* implicit */short) min((min((((/* implicit */int) var_5)), ((-(((/* implicit */int) var_5)))))), (((/* implicit */int) var_7))));
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((((/* implicit */unsigned char) ((signed char) var_6))), (var_2))))));
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((1073741696LL) * (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) var_4)) : (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_7))))));
}
