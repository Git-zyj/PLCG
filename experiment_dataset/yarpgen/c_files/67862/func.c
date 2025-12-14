/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67862
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
    var_14 = ((/* implicit */signed char) min((var_14), (var_13)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((2647694367081256981ULL), (((/* implicit */unsigned long long int) var_2))))) ? ((-(var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3877235035U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_0]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (var_4)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0] [i_1])))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    var_16 = ((/* implicit */short) arr_6 [i_1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_3])) & (((/* implicit */int) var_9)))))) & (((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) arr_10 [8] [(unsigned char)12] [i_2] [(_Bool)1] [i_4])) : (((/* implicit */int) max(((signed char)122), (((/* implicit */signed char) arr_11 [i_0] [i_0] [i_0])))))))));
                                arr_14 [17ULL] [17ULL] [i_2] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_9)), (var_13)))) ? (min((((/* implicit */unsigned int) (unsigned char)149)), (417732270U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 15799049706628294634ULL))))))) == (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1620673413943551931LL)) % (arr_0 [(short)9] [i_1])))) ? (arr_9 [i_0]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_3] [i_2])))))))));
                                var_18 *= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_9 [(unsigned char)12])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [8U] [i_3] [8U])) : ((~(((/* implicit */int) arr_1 [i_0] [1U])))))));
                                var_19 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((((/* implicit */_Bool) var_5)) ? (-8856657556101991973LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */unsigned int) arr_12 [i_1] [i_1] [11ULL]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((var_10) & (((/* implicit */unsigned long long int) -943792820)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25012))))))))));
    var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (-3482595758488289316LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_11)))))))));
    var_23 *= ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -16)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (short)16089))))) ? (((/* implicit */unsigned long long int) min((1214928104U), (var_2)))) : (((unsigned long long int) 417732235U)))));
}
