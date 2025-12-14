/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6387
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
    var_14 = ((/* implicit */unsigned short) max((var_2), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 12174801639446013383ULL)) ? (9758416518153800129ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3840))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (((/* implicit */unsigned short) var_4)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */unsigned int) var_11);
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) * (var_9))) * (((/* implicit */unsigned long long int) (-(var_8))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) min((var_11), (var_0)))), (min((arr_2 [i_0] [i_2] [i_0]), (((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) ((var_8) / (((/* implicit */long long int) arr_3 [i_0] [i_1]))))) ? (min((((/* implicit */unsigned long long int) var_10)), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))));
                                var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_5))) <= (var_3))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_4 - 1])) : (((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned short)15]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((9758416518153800111ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52142))))))) + (6271942434263538243ULL)))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) (short)13085))), (((((/* implicit */_Bool) (unsigned short)18877)) ? (8688327555555751487ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1])))))))) ? (max((arr_2 [i_0] [i_1] [i_0]), (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) var_5))))))));
                var_17 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8ULL))), (((/* implicit */unsigned long long int) (short)-32493))));
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)40919)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (274877906943ULL)));
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_7 [i_7] [i_7] [i_1] [(unsigned short)0]))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((arr_4 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_5] [(unsigned char)22] [i_1] [i_5] [(unsigned char)22])))))) ? (((/* implicit */int) min((min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)63))), (min((arr_12 [i_6] [i_6] [i_0]), ((unsigned char)255)))))) : (min((((/* implicit */int) min(((unsigned char)9), ((unsigned char)57)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_5))))))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_5] [i_7] [i_5] [(_Bool)0] [i_0]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_6])))))));
                                var_21 = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0] [i_0] [i_7]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_0);
}
