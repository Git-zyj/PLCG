/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68957
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_0 + 1] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */int) var_11)) / (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)129)) || (((/* implicit */_Bool) 2375154406U))))))), (((((/* implicit */int) ((short) (short)30171))) & ((~(((/* implicit */int) arr_4 [(short)2]))))))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-14264))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11))))) ? (7) : (((int) ((var_14) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */int) ((arr_5 [i_0] [(signed char)9] [i_1]) >= (((/* implicit */int) (short)0))))) : ((~(((/* implicit */int) (signed char)-4))))))) ? ((((_Bool)0) ? (((/* implicit */int) ((1072693248LL) > (((/* implicit */long long int) arr_5 [i_0 - 1] [i_0 + 3] [i_0]))))) : (((/* implicit */int) ((unsigned short) -23))))) : (min((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) > (((/* implicit */int) (_Bool)0))))), (-23)))));
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) ((short) (short)-3216))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_14))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_15);
    var_21 = ((/* implicit */unsigned short) var_12);
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) min((var_22), ((_Bool)1)));
        var_23 = ((unsigned short) (unsigned short)19061);
    }
    for (int i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) ((((_Bool) min((var_2), (((/* implicit */short) var_17))))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) (short)3336)))))));
        arr_13 [i_3] &= ((/* implicit */short) (-(((arr_8 [i_3]) ? (((/* implicit */int) var_5)) : (-23)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_4 = 1; i_4 < 17; i_4 += 4) 
        {
            var_24 *= ((/* implicit */short) ((int) arr_9 [i_4 + 2]));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    {
                        arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */short) ((_Bool) arr_21 [i_3] [i_4] [(signed char)11] [i_4 + 1]));
                        var_25 ^= (+(((/* implicit */int) (short)21539)));
                        arr_23 [i_4 + 2] [i_4] [i_4 + 1] [i_4] [i_4] [i_6] = ((/* implicit */unsigned short) ((var_11) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-29232))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_20 [i_3])) : (((/* implicit */int) (short)30720)))))));
            arr_27 [(unsigned char)18] = ((_Bool) ((short) var_7));
        }
        arr_28 [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_13))));
        var_27 ^= ((/* implicit */long long int) ((((_Bool) (_Bool)1)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_17)), (var_0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4175)))));
    }
}
