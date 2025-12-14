/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88495
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((_Bool) arr_1 [i_0] [i_0])))))) : (min((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) var_1))))), (3092428128782325612LL)))));
        var_19 = ((/* implicit */_Bool) (short)-16065);
        var_20 = ((/* implicit */int) ((short) 3092428128782325606LL));
        var_21 += ((/* implicit */int) var_3);
        var_22 |= ((/* implicit */unsigned long long int) min(((unsigned short)55347), (((/* implicit */unsigned short) (signed char)7))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8548608312474829397ULL)) ? (20) : (((/* implicit */int) (short)-32767))))) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]))))));
        var_24 = ((/* implicit */unsigned short) ((_Bool) arr_5 [i_1 + 1]));
    }
    var_25 += var_2;
    /* LoopSeq 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_4 [i_2 - 1])))) ? (((((/* implicit */_Bool) (short)16368)) ? (17ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))))) : (((/* implicit */unsigned long long int) ((arr_4 [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))));
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)48853)))))) : (arr_4 [i_2 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(3717615926U)))))) : (max((((/* implicit */unsigned long long int) arr_4 [i_2])), (min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (15551551482832216870ULL)))))));
        var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_2])), ((unsigned char)172))))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned char) (-(var_11)));
        var_30 ^= ((/* implicit */unsigned long long int) arr_7 [(signed char)6]);
        arr_10 [i_3] = ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_8 [i_3 - 1]))));
    }
    var_31 = ((/* implicit */_Bool) ((unsigned int) var_2));
    var_32 |= var_15;
}
