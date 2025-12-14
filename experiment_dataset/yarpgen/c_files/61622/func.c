/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61622
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
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (short)12))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) & (((13551688659352618201ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
        var_16 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (short)-23612)) || (((/* implicit */_Bool) var_5)))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~(((/* implicit */int) (short)-2)))))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]);
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((max((((/* implicit */unsigned int) 2095104)), (2693636261U))) & (((/* implicit */unsigned int) (+(max((-2095105), (((/* implicit */int) (short)(-32767 - 1)))))))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
    {
        arr_7 [i_2] [i_2] = min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2])) && (((/* implicit */_Bool) arr_5 [i_2])))))) <= (((long long int) (short)23593))))), (max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) -686439350543005015LL)) : (10828888576237872073ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)254))))))));
        var_20 = ((/* implicit */long long int) 1033242893U);
        arr_8 [(_Bool)1] [i_2] = max((arr_0 [i_2]), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1681657566214508077LL)), (arr_1 [(signed char)19] [(signed char)19]))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
    {
        var_21 += ((/* implicit */unsigned char) ((var_10) - (((/* implicit */unsigned long long int) -2095105))));
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_11 [i_4]))));
            var_23 = ((/* implicit */signed char) 0LL);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    for (unsigned int i_7 = 1; i_7 < 21; i_7 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((2828250173115535687ULL), (((/* implicit */unsigned long long int) (_Bool)0))))) ? ((~(6ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) 686439350543005014LL))))), (((/* implicit */unsigned long long int) arr_16 [i_3]))));
                            var_25 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (var_5)))) ? (((/* implicit */int) arr_11 [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_3])))))))) * (max((12683663018007800483ULL), (((/* implicit */unsigned long long int) (unsigned short)24741))))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned char) ((((10U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40819))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((7503948041358342454ULL) >= (((/* implicit */unsigned long long int) arr_17 [i_4]))))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4]))) < (var_12))))))) : ((+(max((8480055792878260791ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) arr_3 [i_8 - 1] [i_8 - 1]);
        arr_25 [i_8 - 1] [(unsigned short)11] = ((/* implicit */long long int) ((((/* implicit */_Bool) 13U)) ? (10998553661773817239ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_8])))));
    }
    for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 1) /* same iter space */
    {
        var_28 *= ((max((((unsigned long long int) arr_28 [i_9])), (((/* implicit */unsigned long long int) (+(-2095122)))))) > (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_12 [i_9 - 1]))))) ? (((((/* implicit */_Bool) -5384361370704813182LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9]))) : (arr_1 [i_9] [i_9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_9 + 1]))))));
        var_29 *= ((10998553661773817228ULL) + (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)16384)) : (-2095122)))));
        arr_29 [i_9 - 2] = ((((/* implicit */_Bool) max(((short)-22804), (((/* implicit */short) (!(((/* implicit */_Bool) 2095123)))))))) ? (((/* implicit */unsigned long long int) max((1U), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) == (((/* implicit */int) (short)-15289)))))))) : (((((/* implicit */_Bool) arr_5 [i_9 + 1])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9 + 1]))))));
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) arr_10 [i_9]))));
        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_9 + 2]))))) ? (((/* implicit */int) arr_27 [i_9 + 1])) : (((/* implicit */int) arr_27 [i_9 - 1])))))));
    }
    var_32 &= ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) (short)-36)) < (((/* implicit */int) (short)15288))))), (var_3)))) < (((/* implicit */int) (short)2466))));
    var_33 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_10)) ? (((var_8) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (short)-2467))))));
}
