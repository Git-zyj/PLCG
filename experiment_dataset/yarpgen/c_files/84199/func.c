/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84199
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((((var_11) ^ (((/* implicit */int) arr_0 [i_0])))) + (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_4))))))) + (2147483647))) << (((((/* implicit */int) ((signed char) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_5)))))) + (111)))));
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (((+(max((arr_2 [i_0]), (((/* implicit */int) (unsigned short)63063)))))) * (((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))) + (((((/* implicit */int) (signed char)15)) - (((/* implicit */int) arr_0 [i_0])))))))))));
    }
    for (signed char i_1 = 1; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_4)))) == (((/* implicit */int) max((var_4), (var_1))))));
        var_14 = ((/* implicit */long long int) max((var_14), ((((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)93))) - (-4617362925006205305LL))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((6987474862316139914ULL) >= (((/* implicit */unsigned long long int) 52619708U))))) <= (((arr_2 [i_1]) + (((/* implicit */int) arr_1 [i_1]))))))))))));
        arr_6 [i_1] = ((/* implicit */unsigned char) (((-(-4617362925006205300LL))) + (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_7))))) : ((+(-4617362925006205331LL)))))));
    }
    var_15 = ((/* implicit */unsigned short) ((((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-17))))) >> (((((((((/* implicit */long long int) ((/* implicit */int) var_4))) + (-4617362925006205312LL))) / (((/* implicit */long long int) ((int) var_1))))) + (111684273637769LL)))));
    var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)98))))) || (((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_8)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) var_9)))))));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 3; i_2 < 20; i_2 += 3) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_3)) * (((/* implicit */int) arr_0 [i_2 - 2]))))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) var_6))))))));
    }
    var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((((((/* implicit */int) var_5)) > (var_8))) ? (var_8) : (((/* implicit */int) var_6)))))));
}
