/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63149
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
    var_13 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))), ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!((_Bool)1))))))));
    var_14 = min((max((((/* implicit */unsigned long long int) (unsigned char)109)), (var_8))), (((/* implicit */unsigned long long int) var_5)));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 6; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 6; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 = ((((/* implicit */int) (unsigned short)48609)) ^ (((/* implicit */int) (_Bool)1)));
                        var_16 |= ((/* implicit */int) arr_6 [i_1] [i_1] [i_1 + 4]);
                        var_17 = ((/* implicit */_Bool) var_9);
                        arr_11 [i_0] [i_0] [i_0] [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)127)))))) > (((((/* implicit */_Bool) -2036488063439194680LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_12))));
                        arr_12 [i_0] = ((/* implicit */short) (unsigned short)16931);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            var_18 = ((/* implicit */long long int) ((((arr_13 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)125), (((/* implicit */unsigned char) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) (unsigned short)65530)))))) : (2537410589255159552ULL)));
            var_19 = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) var_3)), (arr_13 [i_0]))));
            var_20 -= ((/* implicit */unsigned short) (_Bool)1);
        }
        for (unsigned short i_5 = 4; i_5 < 9; i_5 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48623)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : ((((_Bool)1) ? (((/* implicit */int) var_3)) : (var_4))))) < (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_7)))))));
            var_22 *= ((/* implicit */_Bool) var_5);
            arr_20 [i_0] [i_0] = ((/* implicit */unsigned int) (+(var_4)));
        }
        var_23 = ((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)));
        var_24 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 14470706757716876827ULL)) ? (arr_13 [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_0 + 2]))))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (-(((((/* implicit */_Bool) max((((/* implicit */short) arr_1 [6])), ((short)-3574)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) : (((/* implicit */int) arr_17 [i_0 - 1] [i_0 + 2] [(_Bool)0])))))))));
    }
    var_26 = ((/* implicit */unsigned short) (signed char)-6);
}
