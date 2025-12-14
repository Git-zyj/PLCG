/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6220
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
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) var_8);
        var_14 = ((/* implicit */short) max((((/* implicit */long long int) min((arr_0 [i_0 - 1]), (((/* implicit */short) max(((_Bool)1), ((_Bool)0))))))), (((((/* implicit */_Bool) var_1)) ? (4611686018427355136LL) : (arr_1 [i_0 + 1])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)33))) ^ (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (4611686018427355117LL))))) : (((/* implicit */long long int) (-(229256540U))))));
        arr_6 [i_1] [(_Bool)1] = ((/* implicit */int) min((((/* implicit */long long int) arr_4 [i_1])), (((((/* implicit */_Bool) ((signed char) var_0))) ? (max((var_3), (((/* implicit */long long int) arr_4 [i_1])))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (var_12))))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) var_7);
    }
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (short i_3 = 3; i_3 < 17; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                for (signed char i_5 = 3; i_5 < 17; i_5 += 4) 
                {
                    {
                        arr_16 [i_2] [i_2] [i_4] [i_4] [i_5] [i_5 - 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -705578880)) ? (-4303014672126700440LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))))))) % (max((((unsigned long long int) (short)(-32767 - 1))), (((/* implicit */unsigned long long int) max((0), (((/* implicit */int) (short)-32755)))))))));
                        arr_17 [i_2] [i_4] [i_5] = ((/* implicit */unsigned short) var_13);
                        arr_18 [i_2] [i_5] [i_4] [i_5] = ((/* implicit */unsigned int) arr_13 [i_2] [i_2] [i_2] [i_3 + 2]);
                    }
                } 
            } 
        } 
        arr_19 [i_2] = ((/* implicit */unsigned short) arr_10 [i_2]);
    }
    var_15 = ((((/* implicit */_Bool) -705578880)) ? (((/* implicit */int) (short)-5)) : (((/* implicit */int) (signed char)16)));
    var_16 = ((/* implicit */signed char) min(((~(((/* implicit */int) ((signed char) (signed char)16))))), (((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 3; i_7 < 11; i_7 += 4) 
        {
            for (signed char i_8 = 4; i_8 < 11; i_8 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) var_0);
                    arr_26 [i_6] [i_6] [4LL] [i_8] = ((/* implicit */_Bool) ((long long int) min((max((((/* implicit */unsigned short) var_4)), (arr_12 [i_6] [i_6] [i_6]))), (((/* implicit */unsigned short) arr_24 [i_6] [i_8 - 1])))));
                }
            } 
        } 
    } 
}
