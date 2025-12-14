/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83631
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
    var_14 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) (signed char)-94)), (((((/* implicit */_Bool) 1533334930)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) > (((/* implicit */unsigned int) var_0))));
    var_15 = ((/* implicit */_Bool) ((((long long int) var_1)) | (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (4008436267U) : (var_7)))) ? (((/* implicit */int) min((var_10), (var_12)))) : (((/* implicit */int) min(((short)0), (((/* implicit */short) (signed char)-120))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(1660111648U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_5))))) ? (((((/* implicit */_Bool) (short)10)) ? (((/* implicit */int) (signed char)-115)) : ((-2147483647 - 1)))) : (((/* implicit */int) var_12))))) : ((-(((((/* implicit */_Bool) var_3)) ? (2462000215U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115)))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_9 [i_1] [i_1] [7U] [i_1] = ((/* implicit */long long int) max(((~(((/* implicit */int) (signed char)-112)))), (((((/* implicit */_Bool) arr_0 [i_2] [i_3])) ? (var_8) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])))))))));
                            var_17 = var_1;
                            var_18 = ((/* implicit */int) min((var_18), (min(((~(((/* implicit */int) arr_4 [i_0] [i_0])))), (((((/* implicit */int) (unsigned short)22929)) | (((/* implicit */int) (signed char)66))))))));
                        }
                    } 
                } 
                arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_0] [i_0 + 1]), (arr_6 [i_0] [i_0] [i_0 + 3])))) ? (((/* implicit */unsigned int) (-(var_0)))) : (((((/* implicit */_Bool) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) (short)22)))))) ? (((((/* implicit */_Bool) var_5)) ? (2646736260U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) 4294967295U)) ? (4294967277U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15113)))))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 23; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        {
                            arr_18 [i_1] [i_1] = ((/* implicit */unsigned int) var_6);
                            arr_19 [i_0] [i_1] [i_4 + 1] [i_1] = ((/* implicit */long long int) var_7);
                            /* LoopSeq 1 */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                arr_22 [i_0] [i_4] [i_4] [15ULL] [i_1] [i_6] [i_0] = ((/* implicit */signed char) (!(((((((/* implicit */_Bool) 4U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (6048418014025754976ULL))) != (((/* implicit */unsigned long long int) (~(var_3))))))));
                                var_19 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9794))) / (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_4] [i_5]))) * (var_11))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)110)))))))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (signed char)100);
                                arr_24 [i_1] [i_5] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))));
                                arr_25 [i_1] [i_4] [i_5] [i_1] = ((/* implicit */int) (((+(arr_20 [i_1] [i_4 + 1]))) << (((((((/* implicit */unsigned int) ((/* implicit */int) (short)19))) + (var_11))) - (1275183048U)))));
                            }
                            var_20 ^= ((/* implicit */unsigned int) var_8);
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) (short)-20);
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((var_22), ((((!(((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) 270215977642229760ULL))))));
}
