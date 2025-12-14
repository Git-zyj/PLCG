/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57850
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
    var_17 = (~(((/* implicit */int) (_Bool)1)));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (((((unsigned long long int) arr_2 [i_0])) << (((var_3) - (773347771)))))));
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-54))))) ? (((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) 2583620684U)) ? (((/* implicit */int) (unsigned char)69)) : (-599795286)))));
        var_19 -= ((/* implicit */unsigned long long int) (unsigned char)48);
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) (-(min((arr_5 [i_1]), (arr_5 [i_1])))));
        var_21 = ((((((((/* implicit */_Bool) -787932649)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_1])) & (((/* implicit */int) arr_6 [i_1]))))))) >> (((min((((/* implicit */int) arr_6 [i_1])), (min((((/* implicit */int) arr_6 [i_1])), (-1219210501))))) + (1219210539))));
        var_22 = ((/* implicit */int) (signed char)127);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((1219210498) << (((((/* implicit */int) (short)24011)) - (24011)))))) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_6 [i_2])))))));
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((arr_6 [i_2]) ? (((var_3) & (((/* implicit */int) (unsigned char)55)))) : ((-(((/* implicit */int) (unsigned char)189)))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */int) (-((-(var_15)))));
        var_25 |= ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)198)), ((unsigned short)65535)));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (~(((/* implicit */int) min(((signed char)-119), (((/* implicit */signed char) (_Bool)1))))))))));
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (-(((/* implicit */int) arr_11 [i_3])))))));
        arr_15 [i_3] [i_3] = min((17102153787183052677ULL), (((/* implicit */unsigned long long int) (short)-14896)));
    }
}
