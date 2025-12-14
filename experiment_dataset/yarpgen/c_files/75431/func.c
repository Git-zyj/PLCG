/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75431
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)31967))));
                var_14 = ((/* implicit */long long int) (unsigned short)31963);
                arr_5 [i_0] [12ULL] [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31965)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))))) && (((/* implicit */_Bool) arr_0 [(short)18] [(unsigned char)17])));
                var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_6))) - (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33593))) / (2189099248U))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)239))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                var_16 ^= var_5;
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!((!((_Bool)0))))))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_18 ^= ((/* implicit */_Bool) ((var_9) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_8)) : (var_7)))) ? (((/* implicit */int) min((var_1), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) var_10)))))));
                                var_19 = ((/* implicit */unsigned long long int) var_1);
                            }
                        } 
                    } 
                    var_20 = min((((/* implicit */short) (!(((/* implicit */_Bool) var_3))))), ((short)27752));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((long long int) (signed char)118)))));
                    var_22 -= ((/* implicit */long long int) ((_Bool) 1477928033023072829ULL));
                }
                for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
                {
                    arr_24 [i_3] [i_7] = ((/* implicit */unsigned short) (_Bool)1);
                    var_23 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) && ((!(((/* implicit */_Bool) (short)(-32767 - 1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : ((~(arr_11 [i_2] [i_2])))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) (unsigned short)33588)) ? (9345972222724127402ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65532)))))));
                }
                var_25 = ((/* implicit */unsigned short) (+(var_2)));
                var_26 = ((/* implicit */unsigned int) ((((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_9 [i_2] [(unsigned short)3])))) * (((/* implicit */int) (!(((/* implicit */_Bool) 2972341806U))))))) | (var_12)));
            }
        } 
    } 
    var_27 ^= ((/* implicit */_Bool) var_7);
    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) max((var_5), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(var_8)))) <= (((((/* implicit */_Bool) (unsigned short)33573)) ? (((/* implicit */unsigned long long int) 1704384706)) : (var_4)))))))))));
}
