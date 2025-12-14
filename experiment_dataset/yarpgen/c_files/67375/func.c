/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67375
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_1 + 1] [i_1] [i_3] = ((/* implicit */short) ((((1186575310921280846ULL) - (((/* implicit */unsigned long long int) ((arr_6 [(unsigned short)13]) ^ (1655970492)))))) == (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1998651866879978126ULL)) || (((/* implicit */_Bool) var_12))))), (((((/* implicit */_Bool) arr_7 [3LL] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (9852691742000484955ULL)))))));
                        var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((long long int) arr_9 [i_1] [i_1] [i_1] [i_0]))))) / (17260168762788270769ULL)));
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (signed char)99)), (-2393572072327632876LL))), (((/* implicit */long long int) ((signed char) -1206321534)))))) % (var_5))))));
                        arr_14 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((long long int) arr_4 [i_1] [i_1])) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */int) var_10)), (arr_6 [i_0]))))))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((var_0), (((/* implicit */long long int) arr_7 [(signed char)21] [i_0] [i_1])))), (((/* implicit */long long int) arr_1 [i_1 + 1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)93)) ? (var_5) : (((/* implicit */unsigned long long int) -2393572072327632876LL))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_10 [i_0] [i_2] [i_3]) : (((/* implicit */unsigned int) 63))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3] [i_1]))) - (arr_10 [i_1] [(short)2] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5))))))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = (((~(((((/* implicit */int) (short)-25005)) % (((/* implicit */int) (signed char)112)))))) % (((/* implicit */int) var_12)));
    }
    for (int i_4 = 1; i_4 < 22; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 1; i_5 < 24; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 4) 
            {
                {
                    arr_22 [i_4] = ((/* implicit */unsigned char) 18446744073709551615ULL);
                    arr_23 [6LL] |= ((/* implicit */_Bool) ((unsigned short) var_4));
                }
            } 
        } 
        arr_24 [i_4] = ((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_4 + 3]);
    }
    for (long long int i_7 = 2; i_7 < 13; i_7 += 4) 
    {
        var_19 = ((/* implicit */int) ((((long long int) ((((/* implicit */_Bool) (short)-21390)) || (((/* implicit */_Bool) (signed char)-99))))) & (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        arr_28 [i_7] [(signed char)6] = ((/* implicit */int) ((long long int) arr_12 [i_7] [i_7] [i_7 + 4] [i_7 + 1] [i_7] [i_7]));
        /* LoopSeq 1 */
        for (signed char i_8 = 4; i_8 < 14; i_8 += 2) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+((-(arr_20 [i_7 + 3] [i_8 + 2] [i_8 + 1] [i_8]))))))));
            /* LoopSeq 3 */
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                arr_36 [i_7] = ((/* implicit */unsigned long long int) arr_17 [i_7]);
                var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) var_4)) + (97))))) >> (((((((/* implicit */_Bool) (unsigned char)93)) ? (1206321534) : (-1))) - (1206321506)))))), (arr_10 [(_Bool)1] [i_8] [(unsigned short)9])));
            }
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                var_22 = ((/* implicit */signed char) ((int) arr_12 [i_7 - 2] [i_7 - 2] [i_10] [i_10] [i_10] [i_10]));
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    arr_42 [i_10] [i_11] [i_8 - 4] [i_11] = ((/* implicit */_Bool) var_6);
                    arr_43 [i_11] = ((((((/* implicit */_Bool) 1206321534)) ? (((/* implicit */int) (short)-21390)) : (((/* implicit */int) ((short) var_14))))) | (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_7])) * (602816913))))))));
                }
                arr_44 [i_7 + 1] = ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) min(((short)21389), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) ((17260168762788270769ULL) == (((/* implicit */unsigned long long int) 1206321534))))) : (((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (signed char)127)) - (112)))))))));
            }
            /* vectorizable */
            for (long long int i_12 = 1; i_12 < 14; i_12 += 4) 
            {
                var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_5)))));
                arr_47 [i_7] [i_8] [i_12 + 2] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [i_7])) ? (60ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_12] [i_8] [i_7 + 1]))))) >> (((((var_13) % (((/* implicit */int) arr_33 [i_7] [(unsigned short)10])))) - (6794)))));
            }
            var_24 = ((((min((var_5), (((/* implicit */unsigned long long int) var_7)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148))))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)(-127 - 1))))) : (((/* implicit */int) min(((short)32767), (((/* implicit */short) ((1151335465U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12090))))))))));
            var_25 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_35 [i_8] [i_8] [i_8 - 1])) & (((/* implicit */int) min((((/* implicit */short) arr_7 [i_7] [i_7] [i_8])), ((short)23685)))))) & (((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (short)-3950))) >= (3935656751U))))))));
        }
    }
    var_26 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) (+(775364988)))) ? (((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) var_13))))));
    var_27 = ((/* implicit */unsigned char) ((var_11) ? (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_2))))) : (((((/* implicit */int) var_2)) - (((/* implicit */int) (short)32767))))));
    var_28 += ((/* implicit */unsigned long long int) ((short) ((((355854056U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) % (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
}
