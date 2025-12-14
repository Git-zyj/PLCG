/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78414
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0)))))))) && (((/* implicit */_Bool) var_15))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = min((((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (min((6510205970265026839ULL), (((/* implicit */unsigned long long int) arr_4 [i_0])))) : (((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_2]) % (((/* implicit */long long int) ((/* implicit */int) var_6)))))))), (((/* implicit */unsigned long long int) arr_6 [14] [i_1 - 1] [i_2] [i_3])));
                            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)38938)) || (((/* implicit */_Bool) arr_7 [i_3]))))))))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_4 [i_1]))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */int) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))), (((arr_9 [i_1 + 2] [i_1 - 1] [i_1 + 2]) / (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                arr_10 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 11936538103444524778ULL)) ? (((/* implicit */int) var_17)) : (-833136226))))) / (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) var_9)) : (arr_4 [i_0])))))));
                arr_11 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_2)))))))) < ((-((~(11936538103444524762ULL)))))));
                var_24 = ((min(((-(-1129970497))), (((/* implicit */int) ((unsigned short) arr_3 [(unsigned short)0] [i_0]))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21886)) ? (((/* implicit */int) (unsigned short)20641)) : (((/* implicit */int) arr_3 [i_1 + 4] [i_0]))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_5 [i_0]) : (((/* implicit */int) var_10)))) : (min((-833136227), (((/* implicit */int) (unsigned short)65527)))))));
            }
        } 
    } 
    var_25 = var_5;
    var_26 = ((/* implicit */signed char) max((var_26), (((signed char) var_10))));
}
