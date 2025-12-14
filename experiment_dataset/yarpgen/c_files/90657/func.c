/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90657
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (+(max((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (4294967295U))))))));
    var_13 &= ((/* implicit */long long int) var_3);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_8))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1])) << (((/* implicit */int) arr_1 [8] [i_1]))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) max((arr_6 [i_0] [i_0] [i_2]), ((+(((/* implicit */int) arr_5 [i_0] [i_0]))))));
                    arr_10 [i_0] [(_Bool)1] [0LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1 + 2] [i_0])) + (((/* implicit */int) arr_5 [i_1 - 1] [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_10)) : (var_2)))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) : (var_8))) : (((((_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)106))) : (8059054770064571614LL)))));
                    arr_11 [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)191))))) | (((((/* implicit */long long int) 1650868821U)) ^ (1684481215150849641LL)))))) ? (max((min((arr_4 [3U]), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [5LL]))))))) : (((unsigned int) (!(((/* implicit */_Bool) var_8)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 19; i_3 += 4) 
    {
        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
        {
            {
                var_15 = ((int) ((arr_13 [i_3] [9]) % (1684481215150849641LL)));
                var_16 = (~(((unsigned int) arr_15 [i_3 + 2])));
                /* LoopSeq 2 */
                for (long long int i_5 = 2; i_5 < 19; i_5 += 3) 
                {
                    arr_21 [(_Bool)1] [20U] [i_5 - 2] |= max((((((/* implicit */unsigned int) (-(var_2)))) - (((unsigned int) 4U)))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) > (arr_17 [i_4 - 1] [3] [i_5])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        arr_24 [i_3] [i_3] [i_6] [i_6] [i_3] = ((/* implicit */unsigned char) arr_13 [7LL] [i_4]);
                        var_17 = ((unsigned char) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_0))));
                        arr_25 [i_3] [i_6] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) ((4294967290U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) < (var_2)))))));
                    }
                    var_18 &= ((/* implicit */int) max(((unsigned char)29), (((unsigned char) max((arr_17 [i_4] [i_4 + 2] [16LL]), (((/* implicit */unsigned int) (unsigned char)237)))))));
                }
                for (long long int i_7 = 1; i_7 < 19; i_7 += 1) 
                {
                    arr_28 [i_3] [i_4] [i_4] [i_7] = ((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? ((~(4294967273U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */int) (unsigned char)64))))))) > ((~(((2432465577U) + (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_18 [i_3 - 2])) ? (arr_18 [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_7 - 1]))))) <= (((/* implicit */long long int) ((/* implicit */int) ((var_9) != (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)67)) << (((arr_27 [i_3] [i_3] [i_3]) - (2910847398U)))))))))))))));
                    var_20 = ((/* implicit */unsigned int) ((670155926U) >= (((/* implicit */unsigned int) ((arr_16 [8]) & (((((/* implicit */_Bool) var_4)) ? (var_11) : (arr_12 [i_3]))))))));
                    var_21 ^= ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)237), (var_10))))) / (((long long int) 1236991434U))))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 351122395U)) % (arr_13 [i_4 + 1] [i_4 + 2])))))))));
                }
            }
        } 
    } 
}
