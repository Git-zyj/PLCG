/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69913
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_14 += ((/* implicit */signed char) (!(((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) || (((((/* implicit */int) arr_2 [(_Bool)1])) > (((/* implicit */int) (signed char)-1))))))));
        arr_3 [(unsigned short)7] = ((/* implicit */signed char) ((unsigned long long int) ((1863765251U) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)22)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_2 [i_0]))))))) ? ((-((-(var_9))))) : (((/* implicit */unsigned long long int) (+(var_2))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)198)) > (((/* implicit */int) var_1)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (arr_1 [11LL]))) : (((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (6802585947833497600ULL)))))) ? (((/* implicit */int) (!(((_Bool) var_12))))) : (((/* implicit */int) ((((/* implicit */_Bool) 1863765247U)) && (var_12))))));
                                arr_14 [i_0] [i_2] [i_2] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (+((-(((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_1])))))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-(((((1583980864) & (var_10))) ^ ((-(((/* implicit */int) var_4)))))))))));
                                var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) ((unsigned long long int) arr_2 [i_4]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_5 = 4; i_5 < 14; i_5 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                arr_21 [(short)14] [(unsigned short)8] [i_6] [10ULL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65533)))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned short)15] [i_5] [i_5] [(unsigned short)15]))) | (6802585947833497600ULL)))));
                var_19 *= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 1039790883U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (2431202073U))));
                var_20 *= (~((+(var_6))));
                arr_22 [i_0] [i_0] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((((/* implicit */int) (unsigned char)206)) - (185))))))));
            }
            arr_23 [i_0] [i_5] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [(short)13]))) - (var_6))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_5 + 3]))))));
        }
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(((unsigned long long int) 13119172791644114907ULL)))))));
    }
    var_22 = ((/* implicit */int) max((var_22), ((~(((((((/* implicit */int) var_8)) + (((/* implicit */int) var_4)))) / ((-(((/* implicit */int) var_3))))))))));
}
