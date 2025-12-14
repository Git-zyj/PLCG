/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62170
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
    var_10 = ((/* implicit */long long int) (+(((/* implicit */int) (short)5))));
    var_11 = ((/* implicit */_Bool) 978649824U);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_12 *= ((/* implicit */_Bool) (short)13202);
        var_13 &= ((/* implicit */short) ((long long int) var_7));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) var_2))));
            arr_5 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) ((arr_1 [i_0] [(short)8]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) * ((-(((/* implicit */int) arr_3 [i_1])))))) & (((/* implicit */int) ((_Bool) arr_3 [i_0 - 1])))));
        }
        for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            arr_9 [i_2] [i_2] [i_2] |= ((/* implicit */unsigned long long int) ((unsigned char) var_7));
            arr_10 [i_0] = ((/* implicit */unsigned char) (!(arr_3 [i_0 - 1])));
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (~(arr_8 [i_0 + 1] [i_0 + 1] [i_2]))))));
            /* LoopSeq 3 */
            for (unsigned int i_3 = 1; i_3 < 19; i_3 += 4) 
            {
                arr_14 [i_0] = arr_8 [i_0 - 1] [i_2] [i_2];
                var_16 = ((/* implicit */unsigned char) ((((arr_8 [i_2] [i_2] [i_2]) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))) > (((/* implicit */unsigned long long int) (+(((var_0) ? (arr_4 [i_0] [i_0] [(_Bool)1]) : (((/* implicit */long long int) var_9)))))))));
                arr_15 [i_2] &= ((/* implicit */_Bool) (((!(((((/* implicit */_Bool) arr_0 [i_2])) || (((/* implicit */_Bool) arr_12 [(_Bool)1] [i_2] [(_Bool)1])))))) ? (((/* implicit */int) min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4))) : (944516723U)))))))));
                var_17 ^= ((/* implicit */_Bool) var_6);
                var_18 ^= ((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1)));
            }
            /* vectorizable */
            for (long long int i_4 = 1; i_4 < 22; i_4 += 2) 
            {
                arr_19 [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0 + 1] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_16 [i_0 - 1] [i_0 - 1] [i_4 - 1] [i_4 + 1])));
                var_19 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)232))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_24 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_23 [i_0 - 1] [i_0 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) (short)-4))))) ? (((/* implicit */int) (short)-5118)) : (((/* implicit */int) max((arr_21 [i_5] [i_5] [11LL] [i_0]), (arr_17 [17LL] [i_2] [i_0] [20LL]))))))) : (7796964020193354810LL)));
                arr_25 [i_0 - 1] [6LL] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) -6674647141686565968LL))));
                arr_26 [i_0] [i_2] [i_2] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) ((short) (unsigned char)241)))));
            }
        }
        arr_27 [22ULL] |= ((/* implicit */long long int) (-(((/* implicit */int) ((short) (unsigned char)106)))));
    }
}
