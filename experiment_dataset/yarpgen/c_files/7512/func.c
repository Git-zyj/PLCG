/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7512
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
    var_17 = ((/* implicit */unsigned short) ((short) ((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
    var_18 = ((/* implicit */int) var_9);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)0))))));
        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_0 [(unsigned short)2] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0])))))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)1792)) : (((/* implicit */int) (unsigned char)255))))) + ((-(var_11)))));
        var_22 &= ((/* implicit */short) min(((((!(arr_1 [i_0]))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1786)) * (((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)64001)))))));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_3])) ? (((/* implicit */int) arr_8 [i_2] [i_1] [i_2])) : (((/* implicit */int) (unsigned char)13)))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-1792)) : (((/* implicit */int) (unsigned char)255))))) >= (((unsigned long long int) arr_8 [i_1] [i_1] [i_1])))))));
                    arr_9 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */short) ((min((((((/* implicit */int) var_4)) >> (((1512560464) - (1512560437))))), ((+(((/* implicit */int) (unsigned char)242)))))) < (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_6 [i_1] [i_1])))))));
                    var_24 = 4478963497539030662LL;
                }
            } 
        } 
        arr_10 [i_1] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1785))))));
        var_25 = ((/* implicit */short) ((unsigned short) min(((short)-164), (((/* implicit */short) (_Bool)1)))));
    }
    var_26 = ((/* implicit */short) ((signed char) min((((/* implicit */long long int) (unsigned short)3952)), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (907766034507628851LL))))));
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) * (((/* implicit */int) ((unsigned short) max((var_10), (((/* implicit */short) var_4))))))));
}
