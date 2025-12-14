/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93082
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    var_11 ^= ((/* implicit */unsigned int) (signed char)83);
                    var_12 ^= ((/* implicit */signed char) min((((/* implicit */int) (signed char)-84)), (((min((var_8), (((/* implicit */int) (signed char)-8)))) - (((/* implicit */int) max((var_1), (((/* implicit */short) (signed char)84)))))))));
                    arr_8 [i_0] [(short)20] [(short)13] [i_1] = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (arr_4 [i_0 + 1] [i_0 + 1]))), (((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_0 [i_1]), (((/* implicit */unsigned short) arr_7 [i_0 + 1]))))), ((~(((/* implicit */int) arr_2 [i_0])))))))));
                    var_13 = ((/* implicit */signed char) min((((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))) <= (arr_1 [i_0]))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned short) (signed char)-92)))));
                    var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) min((min((arr_5 [i_0 + 1] [i_1]), (((/* implicit */unsigned int) arr_3 [i_0] [i_2])))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0])))))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)93)) < (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) (signed char)-93))))))) : (((((/* implicit */_Bool) ((unsigned short) (unsigned char)253))) ? (((/* implicit */int) var_4)) : (((var_0) % (((/* implicit */int) (signed char)49))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 4) 
            {
                for (long long int i_6 = 4; i_6 < 10; i_6 += 1) 
                {
                    {
                        arr_22 [(signed char)2] [(short)2] [i_5] [i_3] = ((/* implicit */int) (signed char)70);
                        var_15 = ((/* implicit */long long int) ((short) (signed char)-80));
                        arr_23 [i_3] [i_4] [i_5] [i_6] [i_5] [(signed char)8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_9 [i_4]) : (((/* implicit */unsigned int) var_0))))) && (((/* implicit */_Bool) var_7))));
                    }
                } 
            } 
            arr_24 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_3] [i_4])) > (((/* implicit */int) (signed char)-40))));
        }
        var_16 = ((/* implicit */unsigned short) arr_20 [i_3] [i_3] [i_3] [i_3]);
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_29 [i_7] [(unsigned short)1] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))) | (arr_26 [i_7] [i_7]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) (unsigned char)120)))))));
        arr_30 [i_7] = ((/* implicit */long long int) max((18ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */int) var_2)) : (var_8))))));
    }
    /* LoopNest 2 */
    for (short i_8 = 4; i_8 < 18; i_8 += 4) 
    {
        for (unsigned long long int i_9 = 4; i_9 < 17; i_9 += 4) 
        {
            {
                arr_38 [i_9] = ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-59)), (var_7)));
                var_17 = ((/* implicit */_Bool) ((int) (~(362610696U))));
                var_18 = ((/* implicit */long long int) arr_31 [0LL] [i_9]);
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
    {
        for (long long int i_11 = 3; i_11 < 22; i_11 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_12 = 1; i_12 < 20; i_12 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_13 = 4; i_13 < 23; i_13 += 4) 
                    {
                        for (short i_14 = 3; i_14 < 21; i_14 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) arr_27 [i_10])) ? (((/* implicit */int) arr_25 [i_10])) : (var_8))))) >> (((((((/* implicit */int) (unsigned short)65535)) << (((((((/* implicit */_Bool) arr_40 [(_Bool)1] [i_14])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))) - (4905))))) - (1073725419)))));
                                arr_52 [i_10] [(unsigned short)4] [(unsigned short)4] [i_10] [i_13] [(unsigned short)7] = ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_10))))))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((min((max((((/* implicit */unsigned int) -192274357)), (arr_43 [i_10]))), (((((/* implicit */_Bool) arr_44 [i_11])) ? (((/* implicit */unsigned int) var_0)) : (arr_45 [i_10] [i_11]))))) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)21))))))));
                            }
                        } 
                    } 
                    arr_53 [i_10] [i_11 - 1] [i_12] = ((/* implicit */long long int) ((unsigned int) (unsigned char)135));
                }
                for (signed char i_15 = 0; i_15 < 24; i_15 += 4) 
                {
                    var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_8), (((/* implicit */int) arr_56 [i_15] [i_11] [i_10]))))) ? (((((/* implicit */_Bool) arr_42 [i_10])) ? (((/* implicit */int) arr_42 [i_15])) : (((/* implicit */int) (signed char)80)))) : (((/* implicit */int) min(((signed char)-61), ((signed char)103)))))) < (((int) arr_46 [i_10] [i_11 - 2] [15LL]))));
                    arr_57 [i_10] [i_11 + 1] = ((/* implicit */signed char) 3689337404904830501ULL);
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((int) (-(((/* implicit */int) (signed char)96))))))));
                }
                arr_58 [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)13)), (-1196414953)))) ? (min((((/* implicit */int) min(((unsigned char)108), (((/* implicit */unsigned char) (signed char)-69))))), (((((/* implicit */_Bool) arr_25 [i_10])) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) (signed char)-14)))))) : (((/* implicit */int) max(((unsigned short)1), (((/* implicit */unsigned short) var_3)))))));
            }
        } 
    } 
}
