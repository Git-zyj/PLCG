/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83847
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (short)6625)) << (((((/* implicit */int) var_4)) + (6807)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            var_17 = ((max((-1064767623147485876LL), (((/* implicit */long long int) var_7)))) & (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_1 + 2])) ? (var_3) : (((4294934528LL) * (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))));
            arr_6 [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (max((max((17179869183ULL), (398708729772541331ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) % (((/* implicit */int) (_Bool)1)))))))));
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((long long int) (short)(-32767 - 1))))));
            arr_7 [i_0] = ((/* implicit */short) ((-9196273480720802468LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_19 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32295)) && (((/* implicit */_Bool) (unsigned short)53749)))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-4900688368656531778LL) > (4603435105078139063LL))))) : (4294967295U)))));
        }
        var_20 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_3 [i_0])) | (30843353))), (((/* implicit */int) ((var_14) != (((/* implicit */unsigned int) (~(((/* implicit */int) (short)18325))))))))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)235)) : (var_12)))) ? (-205698107) : (0))) & (var_10)));
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) ((min((((/* implicit */unsigned int) arr_5 [i_2 + 1])), (((unsigned int) (short)-31460)))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) arr_1 [i_0]))))))));
            arr_11 [i_0] [i_2] = ((/* implicit */_Bool) var_15);
        }
        for (short i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            arr_14 [i_0] [i_3] [i_0] &= (+((+(min((((/* implicit */int) (short)-18329)), (var_13))))));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) -5745634125351884155LL)) ? (1026588758U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22325))))) : (((/* implicit */unsigned int) var_12)))))))));
            var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) 64U)) / (arr_13 [i_0] [i_0 - 2] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_12 [3] [(unsigned char)2]) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) -205698107)) : (((((/* implicit */_Bool) arr_2 [5U])) ? (4294967282U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)40)))) + (((/* implicit */int) (_Bool)0)))))));
        }
        for (short i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                arr_20 [i_0 - 2] [i_4] = max((((((/* implicit */_Bool) max((10967237630870344137ULL), (((/* implicit */unsigned long long int) arr_17 [i_0 - 3] [i_0 - 3]))))) ? (((/* implicit */long long int) min((arr_15 [i_0] [i_0]), (((/* implicit */unsigned int) arr_9 [i_4] [i_4]))))) : (((((/* implicit */_Bool) 1161209797U)) ? (var_11) : (((/* implicit */long long int) var_12)))))), (((((/* implicit */_Bool) (((_Bool)0) ? (16776192U) : (3750391525U)))) ? (((/* implicit */long long int) arr_12 [i_4] [i_4])) : (((((/* implicit */_Bool) var_8)) ? (var_11) : (arr_8 [i_4] [1]))))));
                /* LoopSeq 1 */
                for (int i_6 = 3; i_6 < 10; i_6 += 2) 
                {
                    var_24 |= ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)122))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)));
                    arr_23 [i_0] [i_0] [i_6] [i_0 - 1] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_6 + 1]))));
                }
            }
            arr_24 [i_0 + 1] = ((/* implicit */long long int) min((3221225472U), (((/* implicit */unsigned int) (signed char)-24))));
            arr_25 [10LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((var_3) | (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) (short)-31452)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) arr_5 [i_4]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) -4271032347677796446LL)))))))) : (((((/* implicit */_Bool) -205698105)) ? (4294967229U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            var_25 *= ((/* implicit */unsigned int) (+(var_10)));
        }
    }
}
