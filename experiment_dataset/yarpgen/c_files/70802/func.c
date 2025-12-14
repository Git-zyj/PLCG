/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70802
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
    var_10 = ((/* implicit */int) (+(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -5904132659803341770LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))), (max((1071644672U), (((/* implicit */unsigned int) var_8))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)64)), (((int) max((((/* implicit */unsigned int) (signed char)65)), (1160488409U))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((_Bool) arr_6 [i_0])) ? (((arr_12 [i_0] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2] [i_2]) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) min((((/* implicit */short) arr_11 [(unsigned short)9] [20LL] [(unsigned short)9] [i_0] [(unsigned short)8] [i_4])), (var_3))))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) (signed char)-73))));
                                arr_16 [i_0] [i_3] [i_0] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_2] [i_3 - 1] [i_4 + 1]))) : (var_5))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)65))))))), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_7))) >= (((int) arr_3 [i_0]))))));
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (var_6)))) ? ((-(-2753845046897923897LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_1] [i_2 - 1] [6ULL] [i_4])))))))) ? (((/* implicit */long long int) (-(min((353101198U), (((/* implicit */unsigned int) var_7))))))) : (((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_0 - 2] [i_0 - 2] [i_0] [i_3])))))));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-2753845046897923897LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3941866106U)) ? (11492863766754556482ULL) : (((/* implicit */unsigned long long int) 7575657819000460019LL))))) ? (((((/* implicit */_Bool) 2401817645025064150ULL)) ? (5104986802252976708LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)88))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)59))))) : (((((/* implicit */_Bool) -2068298688)) ? (((long long int) (signed char)64)) : (((/* implicit */long long int) ((/* implicit */int) ((353101202U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68)))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        for (long long int i_6 = 4; i_6 < 8; i_6 += 2) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_24 [(unsigned char)3] [i_5] [i_6] [i_6] = ((/* implicit */_Bool) var_0);
                    var_15 = ((/* implicit */unsigned short) ((signed char) ((signed char) ((((/* implicit */int) var_9)) / (1659342805)))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_17 [i_5] [i_6]))));
                    var_17 ^= max((((/* implicit */int) ((unsigned char) ((2147483647) - (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) (short)32149)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 3941866074U)) ? (((/* implicit */unsigned int) 997222630)) : (1968660971U))))));
}
