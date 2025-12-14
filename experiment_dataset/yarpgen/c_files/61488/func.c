/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61488
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
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_1 - 1] [i_0] [i_3 + 2] = ((/* implicit */short) var_7);
                            arr_10 [i_0] [1] [(_Bool)1] = ((/* implicit */unsigned int) arr_2 [4] [i_0]);
                        }
                    } 
                } 
                var_18 = ((((((/* implicit */_Bool) (unsigned short)4095)) ? (((unsigned long long int) arr_0 [0] [i_1])) : (min((((/* implicit */unsigned long long int) (unsigned short)4080)), (18120904203925367519ULL))))) & (((/* implicit */unsigned long long int) (~(arr_6 [i_0 + 1] [i_0 - 2] [i_0])))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        {
                            var_19 -= ((/* implicit */unsigned short) ((long long int) 0));
                            /* LoopSeq 1 */
                            for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
                            {
                                arr_18 [i_5] [i_5] [(signed char)0] [i_0] [i_6] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_0])), (((((/* implicit */_Bool) (unsigned short)65535)) ? (18120904203925367519ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4095))))))))));
                                arr_19 [(unsigned short)10] [i_1 + 1] [i_4] [i_5] [(unsigned short)10] [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), ((-(((/* implicit */int) (unsigned short)0))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (((unsigned char) var_15))))) : (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0 - 1] [i_1] [i_4] [i_0] [i_0 + 1] [i_0 + 1])) < (((((/* implicit */int) var_10)) ^ (var_13))))))));
                            }
                            var_20 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) var_16)))))))), ((~(((/* implicit */int) max((var_6), (((/* implicit */unsigned char) var_1)))))))));
                            var_21 = ((/* implicit */long long int) ((325839869784184096ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121)))));
                            arr_20 [i_0] [i_1] [9ULL] [i_5] = ((/* implicit */unsigned char) (+(((460241587U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 2] [i_0 - 2] [i_4] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((unsigned int) ((((/* implicit */int) (signed char)112)) & (200830197)))))));
    var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_13), (((/* implicit */int) var_9))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_6)))) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)4095)) | (((/* implicit */int) var_4))))) ? (((/* implicit */int) max(((short)-20103), (((/* implicit */short) (signed char)13))))) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) max((var_4), (var_9)))) ? ((-(((/* implicit */int) (unsigned short)55268)))) : (min((((/* implicit */int) var_9)), (var_11)))))));
}
