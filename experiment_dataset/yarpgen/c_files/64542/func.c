/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64542
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_11 += ((/* implicit */signed char) var_0);
        var_12 = ((/* implicit */unsigned short) var_2);
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)20)), (arr_0 [(short)17])))), (((long long int) var_5))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((var_7), (arr_2 [i_0]))))));
        var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 4) 
    {
        var_15 = ((/* implicit */int) arr_5 [i_1] [i_1]);
        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) 267428981786711848ULL))));
    }
    for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((18179315091922839767ULL), (((/* implicit */unsigned long long int) (unsigned short)44093)))))));
        var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_7 [i_2] [i_2]) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) min(((short)8930), (((/* implicit */short) var_10))))) ? (((((/* implicit */_Bool) 18179315091922839767ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_2])))) : (((/* implicit */int) arr_1 [i_2]))))));
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] = ((/* implicit */signed char) ((long long int) max((((917854214051999611LL) >> (((((/* implicit */int) (short)3327)) - (3313))))), (((/* implicit */long long int) max((arr_11 [i_2] [i_2] [i_2]), (((/* implicit */int) arr_6 [i_3]))))))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_4 [i_2]), (-4772212255364475623LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2])))))) : (((((/* implicit */_Bool) arr_4 [(unsigned short)4])) ? (arr_4 [i_3]) : (arr_4 [i_2])))));
            arr_13 [i_2] [i_2] [i_2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (unsigned short)6959)), (4294967295U))), (((/* implicit */unsigned int) arr_1 [(_Bool)1]))))) ? (((((/* implicit */_Bool) arr_5 [i_2] [i_3])) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (var_6))) : (min(((+(arr_7 [(unsigned short)4] [i_3]))), (((/* implicit */int) arr_9 [i_2]))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((unsigned short) (unsigned char)195)))) ? ((+(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_4]))) : (var_9))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_4])) ? ((-(((/* implicit */int) arr_9 [i_2])))) : (((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (((/* implicit */int) arr_6 [2ULL])))))))));
            var_21 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) arr_6 [i_2])), (18179315091922839767ULL))), (((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) var_1))))))));
            var_22 = ((/* implicit */unsigned int) arr_7 [i_2] [i_4]);
            arr_17 [(unsigned short)5] = ((/* implicit */_Bool) ((unsigned int) arr_9 [i_2]));
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)132))))) ? (((/* implicit */int) ((unsigned short) arr_15 [i_2]))) : (((/* implicit */int) var_10))));
            var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5])) ? (arr_4 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (short)26960)))))) ? ((-(267428981786711848ULL))) : (((((/* implicit */_Bool) -1031771813)) ? (((/* implicit */unsigned long long int) var_9)) : (18179315091922839767ULL)))));
            var_25 |= ((/* implicit */long long int) arr_16 [i_5] [i_5] [i_5]);
            arr_20 [i_2] [i_2] [(unsigned short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)6139)) ? (((/* implicit */int) (_Bool)0)) : (2004863754)));
        }
    }
    for (unsigned short i_6 = 1; i_6 < 22; i_6 += 3) 
    {
        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3840))) : (0U)))) ? (((/* implicit */unsigned long long int) max((3475118077U), (((/* implicit */unsigned int) (_Bool)0))))) : (18179315091922839767ULL))))));
        arr_24 [i_6] = min((arr_21 [(unsigned short)22]), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)14413)))));
        arr_25 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21443)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)22)))))) : (arr_23 [11LL])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) max((var_2), (((/* implicit */long long int) arr_22 [i_6] [i_6]))))))) : (max((min((arr_21 [i_6]), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) arr_22 [i_6] [i_6]))))));
        arr_26 [i_6] = ((/* implicit */long long int) (!((_Bool)0)));
    }
    var_27 = -1830236686543696543LL;
    var_28 = ((/* implicit */long long int) var_8);
    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59539)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15405417599359677664ULL)) ? (((/* implicit */int) ((short) 267428981786711837ULL))) : (((/* implicit */int) (unsigned short)44093))))) : (((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_5) : (((/* implicit */unsigned int) 1274202070))))) : (267428981786711848ULL)))));
}
