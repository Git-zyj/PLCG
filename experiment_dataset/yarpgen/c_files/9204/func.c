/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9204
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
    var_13 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) max(((signed char)-92), ((signed char)92)))))), (731095867)));
    var_14 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) var_4)), (var_11))) <= (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_1]))))))))));
                            var_15 = ((int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-47)) && (((/* implicit */_Bool) 11587387757466166549ULL))))), (2314436020U)));
                            var_16 = ((/* implicit */int) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_2] [i_3]))) ^ (5638807838405514600LL))));
                            var_17 = ((/* implicit */unsigned char) ((unsigned int) -7707022324790380648LL));
                            var_18 += ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0]), ((short)-17853))))) : (((4027768301U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_11))));
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((4654070667329003599ULL) - (((/* implicit */unsigned long long int) var_12)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))) : (5638807838405514600LL)))))))));
                /* LoopSeq 1 */
                for (short i_4 = 1; i_4 < 10; i_4 += 4) 
                {
                    arr_13 [i_1] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [(signed char)3] [i_0] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7143))) : (var_6)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (var_11))) : (((/* implicit */unsigned int) ((int) arr_1 [i_0]))))) * (1464037829U)));
                    var_21 = ((/* implicit */signed char) (short)23551);
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_4 + 1] [i_4 + 1] [i_4 + 1])) ? (((((/* implicit */_Bool) arr_5 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 2])) ? (arr_4 [i_4 + 2] [i_4 - 1] [i_4 + 4]) : (arr_4 [i_4 + 2] [i_4 - 1] [i_4 + 4]))) : (((arr_4 [i_4 + 1] [i_4 - 1] [i_4 - 1]) ^ (((/* implicit */long long int) arr_5 [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 + 3]))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 731095873)))) <= ((-(arr_8 [(unsigned short)7] [(unsigned short)7] [i_4] [i_4 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (signed char)9)), (min((-7707022324790380655LL), (((/* implicit */long long int) (signed char)69))))));
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))))))));
                                var_26 &= ((/* implicit */unsigned char) arr_10 [i_6] [i_1] [i_4 + 3] [i_4 - 1]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
