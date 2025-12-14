/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61364
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
    var_12 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        {
                            arr_15 [i_3] [i_0] [i_3] = ((((/* implicit */int) (unsigned short)16128)) - (((/* implicit */int) (unsigned short)16128)));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */int) (unsigned short)12902))))) ? (min((((/* implicit */int) arr_13 [i_1] [i_3] [i_0] [i_1] [i_4])), (var_3))) : (((((/* implicit */_Bool) arr_13 [i_4] [(unsigned char)10] [i_0] [i_4] [i_4])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_1] [14ULL] [i_3] [i_0]))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 13; i_5 += 4) 
            {
                for (unsigned int i_6 = 2; i_6 < 12; i_6 += 4) 
                {
                    {
                        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (+((((_Bool)0) ? (((/* implicit */int) (unsigned short)41486)) : (((/* implicit */int) (unsigned char)0)))))))));
                        var_14 = (unsigned char)22;
                    }
                } 
            } 
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [2LL] [(unsigned char)0] [2LL] [i_1] [i_1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49407)))))) && ((!(((/* implicit */_Bool) (unsigned short)16103)))))))))));
        }
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)24050)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11290345709459714591ULL))))))));
    }
    var_17 = ((/* implicit */unsigned short) (-(-6186582191392869937LL)));
    var_18 ^= ((/* implicit */unsigned int) ((var_7) ? (((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))) : (((1305415708) | ((-(((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        var_19 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)24071)) : (((/* implicit */int) (_Bool)1))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)24061)), (arr_26 [i_7 - 1]))))))) : (((/* implicit */int) (_Bool)1)))))));
    }
}
