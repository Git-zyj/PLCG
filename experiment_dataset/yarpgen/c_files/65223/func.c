/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65223
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (!(var_5)))), ((-(((/* implicit */int) arr_4 [i_0] [(_Bool)1] [11LL] [(_Bool)1]))))))) ? ((-(arr_5 [i_1] [i_2 - 1] [i_2 - 1] [8LL]))) : (((/* implicit */int) var_14)))))));
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) (-((+(1493368554)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0] [i_2 - 1] [(_Bool)1] [i_1]), (arr_4 [i_0] [i_2 + 1] [i_2] [7U]))))) : (((((/* implicit */_Bool) ((long long int) arr_3 [i_0] [i_0] [i_2]))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_0] [i_2 - 1]), ((unsigned short)36138))))) : (var_9))))))));
                    arr_6 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (!((_Bool)1))))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */unsigned short) min((min((arr_5 [i_0] [i_0] [i_0] [i_0]), (arr_5 [i_0] [(_Bool)1] [i_0] [i_0]))), ((~(1210677278)))));
        arr_8 [(_Bool)1] |= ((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)25413))))));
        var_18 *= ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]);
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_19 += ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) max((arr_11 [i_3]), (((/* implicit */short) var_4))))) % (((((/* implicit */_Bool) (unsigned short)40127)) ? (((/* implicit */int) (unsigned short)40119)) : (((/* implicit */int) (short)-10611))))))), ((+(((unsigned int) (unsigned short)40129))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                {
                    arr_17 [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_9 [i_5] [i_3 - 1])))) + (((/* implicit */int) (short)-10611))));
                    var_20 *= ((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_4 [(unsigned short)20] [i_4] [i_3] [i_3]))));
                }
            } 
        } 
        var_22 += ((/* implicit */unsigned long long int) arr_12 [i_3] [i_3] [i_3]);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_6])) ? ((-(((/* implicit */int) arr_19 [i_6])))) : ((+(((/* implicit */int) arr_19 [i_6]))))));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (!(((_Bool) 2589388583U)))))));
    }
    var_25 += ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
}
