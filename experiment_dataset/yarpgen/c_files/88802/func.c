/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88802
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
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (unsigned short)10043);
        arr_4 [i_0] [i_0 + 3] = ((/* implicit */long long int) (~((+(((/* implicit */int) var_17))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] |= ((/* implicit */unsigned long long int) var_10);
        arr_9 [i_1] [i_1] = ((((/* implicit */_Bool) (unsigned short)55499)) && (((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)85)), (6535536506814906505LL)))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) var_0)), (var_1))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)17691)) ? (((/* implicit */int) arr_7 [(unsigned short)10])) : (((/* implicit */int) (unsigned short)47844))))))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 15; i_2 += 2) 
    {
        var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)47845))) ? (((/* implicit */unsigned long long int) -7522881237958528815LL)) : (((12500638696758153432ULL) / (2738560289405629090ULL)))));
        arr_12 [i_2] = ((int) arr_6 [i_2 + 2]);
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 2; i_3 < 24; i_3 += 4) 
    {
        arr_16 [i_3] = ((/* implicit */long long int) (signed char)105);
        var_20 = (unsigned char)8;
        arr_17 [i_3] [8] = ((/* implicit */signed char) ((unsigned long long int) (unsigned short)16298));
        arr_18 [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)0))));
        /* LoopSeq 2 */
        for (short i_4 = 2; i_4 < 23; i_4 += 4) /* same iter space */
        {
            arr_21 [i_3 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_3 + 1] [(_Bool)1]))));
            var_21 = ((/* implicit */unsigned char) ((signed char) (short)-13097));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-6202118123498785989LL)));
            var_23 ^= ((/* implicit */unsigned char) arr_20 [i_3] [i_3 - 1] [i_4]);
        }
        for (short i_5 = 2; i_5 < 23; i_5 += 4) /* same iter space */
        {
            arr_26 [(unsigned char)4] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)0))));
            /* LoopSeq 1 */
            for (short i_6 = 2; i_6 < 22; i_6 += 4) 
            {
                arr_30 [i_3] [i_5 - 1] = ((/* implicit */unsigned long long int) var_11);
                arr_31 [i_6] = ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned short)10043)) ? (var_12) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) var_0))));
            }
        }
    }
    var_24 -= ((/* implicit */unsigned char) ((min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_0)))) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (((((/* implicit */_Bool) (signed char)-117)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))))));
    var_25 |= var_7;
}
