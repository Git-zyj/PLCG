/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98669
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -565265001)) ? (((/* implicit */int) (_Bool)1)) : (max((((/* implicit */int) (_Bool)0)), (-565265008))))))))));
                                var_11 = ((/* implicit */unsigned char) ((_Bool) arr_2 [(unsigned char)22] [i_1]));
                                var_12 = ((/* implicit */unsigned int) var_3);
                                var_13 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (short)20765))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_2))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_2 + 1] [i_2] [i_5 + 1] [i_6])) ^ (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) arr_14 [(signed char)8]))))) ? (((/* implicit */int) ((signed char) 565265013))) : (((/* implicit */int) arr_4 [i_0] [i_5 - 1] [i_5 - 1] [i_5])))) : (((((/* implicit */_Bool) arr_16 [i_2] [i_1] [i_1] [i_2] [i_6] [i_2 + 1] [i_5 - 1])) ? (((/* implicit */int) min((arr_13 [i_0] [i_1] [(unsigned char)11] [i_0]), (((/* implicit */signed char) arr_8 [i_0] [i_1] [i_2] [i_5 - 2]))))) : (((/* implicit */int) ((signed char) -565265011))))))))));
                                var_16 ^= min((((((/* implicit */_Bool) min((1856101592083406174ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (min((var_5), (((/* implicit */unsigned int) (signed char)50)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)82))))), (((/* implicit */unsigned int) 565265025)));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_1] [i_1])) * (((/* implicit */int) (short)32767))))))) ? ((-(var_6))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 134217727U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)21539)))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (var_5)))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_2)))) : (((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_2)))))))), (max((((/* implicit */unsigned long long int) (short)20762)), (10744954510890130082ULL)))));
    var_19 = ((/* implicit */unsigned int) var_9);
    var_20 = ((/* implicit */_Bool) ((short) ((((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (565265015) : (((/* implicit */int) var_7))))))));
}
