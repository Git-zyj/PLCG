/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69445
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
    var_16 = ((/* implicit */unsigned short) max((min((var_10), (((/* implicit */long long int) (~(((/* implicit */int) var_14))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)2))))) ? (((/* implicit */int) max((var_7), ((unsigned char)126)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)50)) : (-2041095857))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) (~(((long long int) arr_1 [i_0 - 1]))));
        arr_2 [i_0] = ((/* implicit */unsigned short) var_2);
        arr_3 [i_0] = (~((~(((/* implicit */int) (_Bool)1)))));
        var_18 -= ((/* implicit */unsigned short) var_3);
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-2)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-51))));
        var_20 ^= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))) > ((+(((/* implicit */int) (signed char)1))))));
    }
    for (long long int i_2 = 2; i_2 < 13; i_2 += 2) 
    {
        var_21 &= (+(((/* implicit */int) arr_4 [i_2 + 2])));
        /* LoopSeq 4 */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
        {
            arr_14 [(signed char)9] [(_Bool)1] = ((/* implicit */unsigned char) 131071);
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        {
                            arr_22 [i_6] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)34668)))) > (((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)50))) : (5537353907962268555LL)))))) > (((/* implicit */int) arr_12 [i_2]))));
                            var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((0) + (((/* implicit */int) arr_5 [i_4])))) << (((29331344U) - (29331314U)))))), (2002314612U)));
                            var_23 -= ((((int) 0U)) << ((((-(((/* implicit */int) (short)-28528)))) - (28506))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)54011)) > (((/* implicit */int) var_1)))) ? (2002314612U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))) ? (1671683120) : ((((-(13))) / (((/* implicit */int) (unsigned short)4312))))));
                arr_26 [i_7] [i_3] [i_7] [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) (short)7680)) ^ (-1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 1]))) : (((unsigned int) 744598206)))), (((/* implicit */unsigned int) -131058))));
            }
            arr_27 [i_2] [i_2] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) 744598200)) : (1345483146U)))) ? (((-495570090) ^ (((/* implicit */int) (signed char)(-127 - 1))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_25 [i_3] [i_2])))))));
        }
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned char) arr_13 [i_2] [i_2] [i_2]);
            var_26 *= ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [(unsigned char)3] [i_8] [i_8] [i_8]))))))));
        }
        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
        {
            var_27 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_2] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((4294967295U) / (1345483146U)))) && (((/* implicit */_Bool) ((long long int) arr_6 [i_9])))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38380)) ? (((/* implicit */int) (signed char)-41)) : (-744598206)))) || ((!(((/* implicit */_Bool) 1345483136U))))))));
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) arr_25 [i_2] [i_2 - 1])), (arr_10 [i_2 - 2]))))) % (((((/* implicit */_Bool) (unsigned short)27152)) ? (4227858432U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_9] [i_2 - 1])))))));
            arr_33 [i_9] [i_2] = ((/* implicit */short) (signed char)27);
        }
        for (long long int i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                var_29 -= ((/* implicit */unsigned char) ((short) ((((/* implicit */int) arr_21 [i_2 + 2] [i_2 + 2] [i_10] [i_10] [i_2 + 1] [i_2 + 1])) | (((/* implicit */int) arr_21 [i_2 + 1] [i_2 - 2] [i_10] [i_10] [i_2 + 2] [i_2 + 2])))));
                var_30 = ((/* implicit */short) (((~(((/* implicit */int) (short)-7681)))) ^ (((/* implicit */int) (unsigned short)7749))));
            }
            arr_39 [i_2] |= ((/* implicit */unsigned char) (+((~(((/* implicit */int) (unsigned short)30868))))));
            var_31 |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)44)))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (744598206) : (-744598207)))) ? (var_3) : (((arr_30 [i_2 + 2] [i_2] [i_2]) << (((var_12) - (2205036733U))))))) : (min((((((/* implicit */_Bool) (unsigned short)13896)) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (unsigned short)27169)))), (((/* implicit */int) min(((unsigned short)27179), (((/* implicit */unsigned short) (short)-27619)))))))));
        }
        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) var_14))));
    }
}
