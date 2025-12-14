/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98926
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) max((4835509325835016311ULL), (((/* implicit */unsigned long long int) (signed char)-124))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_18)))))))) > (max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((13611234747874535310ULL) > (((/* implicit */unsigned long long int) var_16)))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                var_21 = ((/* implicit */unsigned long long int) 0U);
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 1) 
                {
                    for (long long int i_4 = 2; i_4 < 22; i_4 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((signed char) var_4)), (max((var_8), (var_3)))))), (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (arr_9 [i_4] [i_0] [i_1] [i_3])))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3))) / (var_6)))))));
                            var_23 *= ((unsigned long long int) ((unsigned int) arr_9 [i_0] [(unsigned short)16] [(unsigned short)16] [i_4 + 1]));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            var_24 += ((/* implicit */short) (unsigned short)36315);
            var_25 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65531))));
            arr_18 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)255))));
            arr_19 [i_0 + 1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65532))));
        }
        var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) <= (((/* implicit */int) ((((/* implicit */int) arr_13 [i_0 + 1] [(signed char)4])) > (((/* implicit */int) var_11)))))));
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (~(((unsigned long long int) arr_2 [i_0 - 1])))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_6 = 1; i_6 < 22; i_6 += 3) 
    {
        arr_22 [i_6] [i_6 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)94))) ^ (13611234747874535284ULL))) : (((/* implicit */unsigned long long int) 2668876627U))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_2 [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6)))) : (max((((/* implicit */long long int) arr_17 [i_6] [i_6 + 1] [i_6])), (var_6))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_14)))));
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned short) arr_11 [i_6 + 1] [i_6 + 1] [6] [i_6 - 1])), (min((((/* implicit */unsigned short) (short)-32648)), ((unsigned short)65531)))))))));
        arr_23 [i_6] = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_11 [i_6] [12LL] [12LL] [i_6])))), (((/* implicit */int) var_8))));
    }
}
