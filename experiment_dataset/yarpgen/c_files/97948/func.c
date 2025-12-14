/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97948
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */short) ((int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1798310774914587028LL)) ? (((/* implicit */int) (short)-32763)) : (((/* implicit */int) (short)-32751))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54696))) / (13629761785635225557ULL))))));
                    arr_7 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((long long int) ((unsigned long long int) (signed char)-102)));
                    var_16 ^= ((/* implicit */unsigned char) -960062171);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) 960062185);
                                arr_12 [(signed char)14] [i_4] [i_1] = ((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)2)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */signed char) (short)5961);
                        var_19 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [3LL] [3LL] [3LL] [i_0] [i_0]))) & (254931624100429492ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)43429)) ? (((/* implicit */int) var_0)) : (arr_5 [i_1]))))))) != (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)43613)) : (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-5961))) < (var_15)))) >= (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-112)), ((unsigned short)57344)))))));
                            arr_19 [i_5] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (_Bool)0))) >> (((/* implicit */int) ((((/* implicit */int) (short)5956)) != (((/* implicit */int) (unsigned short)48621)))))))) ? (((((/* implicit */_Bool) (short)5941)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 4272339739376253584LL)))) : (((((/* implicit */_Bool) (signed char)-117)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [(unsigned short)3] [i_0]))))))) : (((/* implicit */unsigned long long int) (+(((long long int) arr_3 [3LL] [i_5] [i_6])))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_21 = var_3;
    var_22 = ((/* implicit */int) var_1);
    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((-4190798080718495967LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14261)))))) ? (((((/* implicit */int) (unsigned char)225)) * (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_3)))) << (((((/* implicit */int) var_12)) - (10600)))));
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? ((~(-1115900208))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1595115654)))))))) ? (7104061623073100165ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)32768)))))));
}
