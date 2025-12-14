/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74376
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
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (-((+(12470456249920177393ULL)))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_10);
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((unsigned long long int) ((unsigned long long int) 2533704630595847602ULL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_18 [i_2] [i_2] [i_3] [i_4] [(short)10] [i_5] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */short) arr_2 [i_5] [i_4])), ((short)32758)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_5]))) * (var_16)))))) ? (min((((unsigned int) var_10)), (((/* implicit */unsigned int) arr_16 [i_2] [i_3] [i_4] [i_4])))) : (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (signed char)93)) ? (-1108228964) : (1108228964)))))));
                            var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) min((var_19), (((/* implicit */short) (unsigned char)23))))))));
                            arr_19 [i_2] [i_3] [i_2] [i_5] = ((/* implicit */unsigned char) var_5);
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_3 [i_4] [i_4]))));
                        }
                    } 
                } 
                arr_20 [i_2] [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_3])) : (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_3])))), (((((/* implicit */_Bool) -1108228973)) ? (((/* implicit */int) arr_8 [i_2] [i_3])) : (((/* implicit */int) (short)32767))))));
                var_24 = ((/* implicit */signed char) arr_7 [i_2]);
                var_25 |= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [10U] [(signed char)8]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_7 = 1; i_7 < 18; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    {
                        var_26 = arr_27 [i_6] [(_Bool)1] [i_7] [i_9];
                        arr_32 [10U] [14U] [i_7] [i_6] [10U] |= ((/* implicit */unsigned long long int) (-(var_7)));
                    }
                } 
            } 
        } 
        arr_33 [i_6] = ((/* implicit */short) ((((/* implicit */unsigned int) ((-1108228973) - (((/* implicit */int) ((-1154192533) != (((/* implicit */int) (signed char)93)))))))) ^ (((((/* implicit */_Bool) (-(var_0)))) ? (3238669029U) : (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)0)))))))));
        arr_34 [i_6] = ((/* implicit */unsigned char) -1122105270544361718LL);
        arr_35 [i_6] [i_6] |= ((/* implicit */unsigned char) arr_28 [10LL] [i_6 - 1] [i_6]);
        /* LoopSeq 3 */
        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) 
        {
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) 3258322014U))));
            arr_39 [i_6] [i_10] [i_10] = ((/* implicit */_Bool) var_13);
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_28 = ((/* implicit */short) ((signed char) -3286389161458554501LL));
            arr_43 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 2147483647)) <= (13588762795108711768ULL))) ? (-2147483637) : ((-(((/* implicit */int) (short)-26914))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-81)), ((unsigned short)4920)))) : (1108228973)));
            var_29 = ((/* implicit */_Bool) max(((-(((((/* implicit */_Bool) arr_22 [i_6 - 1])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)4086)))))), (((max((((/* implicit */int) (signed char)-32)), (1108228974))) | (((/* implicit */int) arr_31 [i_11]))))));
            var_30 = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)0));
        }
        for (signed char i_12 = 0; i_12 < 19; i_12 += 4) 
        {
            arr_46 [i_6 - 1] [i_12] = ((/* implicit */unsigned long long int) (_Bool)1);
            arr_47 [i_6] = ((var_0) < (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)84))) < (arr_38 [(unsigned short)12])))), (min((-1108228968), (arr_45 [i_6] [i_6])))))));
            /* LoopNest 3 */
            for (unsigned int i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                for (int i_14 = 0; i_14 < 19; i_14 += 3) 
                {
                    for (unsigned int i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((((/* implicit */_Bool) arr_51 [i_6 - 1] [i_12] [i_14])) || (((/* implicit */_Bool) var_11)))))))) + (min((((((/* implicit */_Bool) 0ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4998))))), (((/* implicit */unsigned int) arr_24 [i_6] [i_12] [i_6 - 1]))))));
                            arr_56 [i_6] [i_6] [5LL] [i_13] [i_13] [i_14] [i_14] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)18168))));
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)48))))));
        }
    }
    var_33 = ((/* implicit */int) max((max((((/* implicit */long long int) var_8)), (var_6))), (((/* implicit */long long int) var_17))));
}
