/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67371
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
    for (short i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 *= ((/* implicit */int) ((-1) <= (((/* implicit */int) (unsigned short)21))));
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? ((~(((((/* implicit */_Bool) arr_5 [i_1] [11])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)-1)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_3] [i_1] [i_2])) | (((/* implicit */int) (short)-3787))))) ? (((((/* implicit */_Bool) (short)13502)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (signed char)-114)))) : (((/* implicit */int) arr_5 [i_0 - 2] [i_2 - 1]))))));
                            var_15 = ((/* implicit */unsigned short) (signed char)114);
                            arr_12 [i_0] [i_1] [i_0] [4U] [i_2 + 1] [i_0] = ((/* implicit */signed char) (-(((-5706499089870092144LL) & (((/* implicit */long long int) arr_7 [i_0] [(signed char)0] [i_0 - 3] [i_1]))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((((/* implicit */int) (short)3781)) > (var_5))) ? (((((/* implicit */int) var_4)) >> (((-81491873) + (81491898))))) : (((/* implicit */int) ((((/* implicit */_Bool) 3153324827276434150LL)) && (((/* implicit */_Bool) arr_10 [i_0 + 2] [(unsigned char)2] [i_1] [(_Bool)1])))))))), ((((!(arr_6 [9U] [i_1] [i_1]))) ? (arr_3 [i_1] [i_0 - 2]) : (((/* implicit */unsigned int) 2147483392))))));
            }
        } 
    } 
    var_17 &= ((/* implicit */short) var_4);
}
