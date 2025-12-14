/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57921
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) ((unsigned long long int) var_7));
                var_16 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-33)) + (2147483647))) << (((((/* implicit */int) (short)11912)) - (11912)))));
                var_17 = ((/* implicit */_Bool) var_2);
                var_18 = ((/* implicit */int) arr_0 [(signed char)6]);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (short)32764)) | (((/* implicit */int) var_2)))) == ((~(((/* implicit */int) var_6)))))))) ^ (((((/* implicit */_Bool) (unsigned char)30)) ? (((((/* implicit */long long int) ((/* implicit */int) var_8))) & (var_4))) : (var_4)))));
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                var_20 = (((((-(((/* implicit */int) (short)11892)))) + (2147483647))) << (((/* implicit */int) (_Bool)0)));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (4943231762859833437ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5986)))))) ? (var_14) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) ((signed char) arr_3 [i_3] [i_3] [(short)11]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)225)))))) : (arr_4 [i_2 + 2] [i_4] [i_3])))));
                            var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (signed char)-62))));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (-((-((-(((/* implicit */int) (unsigned short)41459)))))))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)122))))))) ? ((~((+(((/* implicit */int) arr_2 [i_3] [i_5])))))) : (((/* implicit */int) (short)(-32767 - 1)))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_16 [i_2] [(unsigned short)4] [i_3] [i_3]))));
                var_26 += ((/* implicit */unsigned int) ((int) ((((/* implicit */int) (signed char)61)) + (((/* implicit */int) (short)0)))));
                var_27 = ((/* implicit */signed char) max((var_27), (((signed char) var_11))));
            }
        } 
    } 
}
