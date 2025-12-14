/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57418
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                for (unsigned int i_3 = 3; i_3 < 12; i_3 += 2) 
                {
                    {
                        arr_11 [i_2] [i_2] = ((/* implicit */int) (short)-2592);
                        arr_12 [(_Bool)1] [i_0] [i_2 + 2] [i_2 + 2] [i_0] [i_2] |= ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((-337550090) | (((/* implicit */int) var_5))))))))));
                        arr_13 [i_3 - 3] [i_2 - 1] [i_2] [i_2] [i_0 + 1] [i_0] = ((/* implicit */int) (~(4394866005643013010LL)));
                        arr_14 [13U] [13U] [i_2] = ((/* implicit */unsigned long long int) var_9);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
                        {
                            arr_17 [i_1 - 2] [i_2] = ((/* implicit */int) ((arr_3 [i_0 - 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32760)))));
                            var_15 = ((/* implicit */int) arr_2 [i_2 + 1] [i_4] [i_4]);
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                        {
                            var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_3] [i_3 - 3] [i_2] [i_3 + 1] [i_3] [7LL]))));
                            var_17 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & ((~(((/* implicit */int) arr_4 [i_3] [i_3]))))));
                            var_18 = ((/* implicit */_Bool) arr_18 [i_0] [(short)3] [i_1 - 1] [i_2] [i_2] [i_3] [i_2]);
                            var_19 = ((/* implicit */short) ((((int) arr_0 [i_0])) & (((int) arr_2 [4LL] [(_Bool)1] [i_2 + 2]))));
                        }
                    }
                } 
            } 
        } 
        arr_20 [i_0] = ((/* implicit */long long int) ((((var_11) > (((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0])))) ? (((/* implicit */unsigned int) max((((((/* implicit */int) arr_9 [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1])) | (((/* implicit */int) (short)-18258)))), (((/* implicit */int) ((signed char) 4394866005643013005LL)))))) : (((arr_5 [i_0 + 1]) >> (((arr_5 [i_0 - 1]) - (1183572818U)))))));
    }
    for (short i_6 = 2; i_6 < 7; i_6 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((short) ((arr_15 [i_6 + 3] [i_6] [i_6] [(_Bool)1] [5] [i_6] [i_6 - 1]) - (arr_15 [i_6 + 3] [3U] [i_6 - 1] [(signed char)5] [i_6 + 3] [i_6 + 3] [i_6 + 3]))));
        arr_24 [i_6] = ((/* implicit */short) ((((/* implicit */long long int) ((int) (_Bool)1))) > (((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_6 + 2] [i_6 - 2])) - (880667220)))) ^ (arr_21 [i_6])))));
    }
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (+(-880179729))))));
}
