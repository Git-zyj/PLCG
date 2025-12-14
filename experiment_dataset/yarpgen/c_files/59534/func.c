/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59534
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (var_13)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) arr_3 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [(unsigned short)10] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_1 [i_0] [i_1]))))));
                                var_19 *= ((/* implicit */unsigned int) arr_10 [i_0] [i_4] [(unsigned char)0] [i_3] [i_4]);
                                var_20 *= ((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)-116)))))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] [i_0] = ((/* implicit */short) arr_6 [i_0]);
                            }
                        } 
                    } 
                } 
                arr_14 [5ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((+(var_15))) > (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) > (arr_3 [i_1] [i_1] [i_0])));
                arr_15 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_1])) << (((((((/* implicit */int) arr_9 [(signed char)10] [i_1] [i_0] [i_1])) | (var_8))) - (1277867245)))))))) : (((/* implicit */unsigned long long int) (~(((((((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_1])) + (2147483647))) << (((((((((((/* implicit */int) arr_9 [(signed char)10] [i_1] [i_0] [i_1])) | (var_8))) - (1277867245))) + (1277867313))) - (19))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            {
                arr_22 [4U] = arr_16 [7U];
                arr_23 [i_5] = max((min(((~(arr_17 [i_5]))), (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) var_4))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5])))))))));
                arr_24 [i_6] = ((/* implicit */unsigned short) (-(arr_20 [i_6])));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (-(((((/* implicit */int) var_6)) / ((+(((/* implicit */int) var_4)))))))))));
    var_22 = ((/* implicit */unsigned long long int) var_5);
}
