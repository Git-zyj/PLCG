/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85642
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 3; i_2 < 13; i_2 += 1) 
                {
                    var_12 |= ((/* implicit */int) ((_Bool) var_1));
                    arr_7 [i_2] [i_0] [(_Bool)1] [(unsigned char)0] = ((long long int) ((((/* implicit */int) (signed char)-26)) ^ (((/* implicit */int) var_9))));
                }
                arr_8 [i_0] = ((((/* implicit */unsigned long long int) (~(var_6)))) | (((((/* implicit */unsigned long long int) 406859034)) | (4613589836668884550ULL))));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 13; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        {
                            var_13 -= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) == ((-2147483647 - 1))))), (((0U) & (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!((!(var_11))))))));
                            var_15 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)896)) == (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))))))));
                            /* LoopSeq 2 */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_16 -= ((/* implicit */int) var_7);
                                arr_19 [4LL] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) min((((/* implicit */short) var_3)), (var_5)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-126)) || ((_Bool)0))))));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (+((+((-2147483647 - 1)))))))));
                                var_18 += ((/* implicit */int) var_3);
                            }
                            for (short i_6 = 1; i_6 < 14; i_6 += 4) 
                            {
                                var_19 += ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)159))))))))));
                                arr_24 [i_1 - 1] [i_1] [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) ((((_Bool) ((int) var_3))) || (((/* implicit */_Bool) ((unsigned int) var_0)))));
                                arr_25 [i_0] [i_0] [i_1] [i_1] [i_3] [i_0] [10] = ((/* implicit */signed char) (~(((long long int) var_10))));
                                var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) (-(((/* implicit */int) (_Bool)0))))))));
                                var_21 = ((/* implicit */short) ((_Bool) max(((signed char)-104), (((signed char) 16U)))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-14)) ? ((+(((/* implicit */int) (unsigned char)244)))) : (((((/* implicit */int) (short)63)) / (((/* implicit */int) (_Bool)1))))))) && (((/* implicit */_Bool) ((((((/* implicit */long long int) 1U)) | (var_1))) - (((/* implicit */long long int) 4294967295U)))))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) 311224847755121541ULL))))))));
                            var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((long long int) 4294967289U)) - (((/* implicit */long long int) ((/* implicit */int) (signed char)22)))))) ? (((((/* implicit */int) (signed char)-108)) ^ (((/* implicit */int) var_2)))) : (((((((/* implicit */int) var_8)) + (((/* implicit */int) var_2)))) + (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (var_11))))))));
                            var_25 += ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (var_6))) % (((/* implicit */unsigned int) max(((+(((/* implicit */int) var_0)))), (((((/* implicit */int) var_9)) << (((/* implicit */int) var_9)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) var_9);
}
