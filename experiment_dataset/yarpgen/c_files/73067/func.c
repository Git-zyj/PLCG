/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73067
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
    var_14 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) ((unsigned char) var_7))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned short)45658))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    arr_9 [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [i_1]), (((/* implicit */unsigned long long int) arr_6 [i_2]))))) && (((/* implicit */_Bool) ((long long int) arr_7 [i_0] [i_1])))));
                    arr_10 [i_2] &= ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)200)), (((((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45437))) : (14874345962440882005ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_1] [(signed char)10]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)59)))))))))));
                    arr_11 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)238))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 2; i_3 < 18; i_3 += 3) 
                {
                    arr_15 [i_0] [(unsigned short)1] [i_1] = ((/* implicit */unsigned char) (((-(arr_13 [(unsigned char)13] [(unsigned char)9] [i_1] [16LL]))) > (((/* implicit */unsigned long long int) ((-462889535906817672LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)219))))))));
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_13 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 2]);
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        for (signed char i_6 = 1; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_24 [15LL] [(unsigned short)1] [i_0] [9LL] [i_6 + 2] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (unsigned short)19444)), (16697101344959723931ULL))) >= (14874345962440882005ULL)));
                                arr_25 [i_0] [i_1] [i_1] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2047)) ? (-7145782925123376970LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20091)))));
                                arr_26 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)20098)), (466533671)))) : (67108863U)));
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) -462889535906817672LL)) ? (6370115125655444544ULL) : (arr_2 [i_4]))) + (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238)))));
                    arr_28 [8LL] &= ((/* implicit */unsigned long long int) -462889535906817677LL);
                    arr_29 [(_Bool)1] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned char) var_10));
                }
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_35 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_0] [i_1])) ? (((/* implicit */long long int) min(((+(((/* implicit */int) (unsigned char)211)))), (((((/* implicit */_Bool) (unsigned char)199)) ? (var_7) : (792697154)))))) : (((((/* implicit */_Bool) ((unsigned short) (unsigned char)12))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))) : (max((((/* implicit */long long int) arr_17 [i_0])), (arr_3 [i_7])))))));
                            arr_36 [i_1] [i_0] = min((((/* implicit */unsigned long long int) ((short) ((unsigned long long int) var_4)))), (((((/* implicit */_Bool) ((unsigned short) arr_32 [i_1] [i_7] [3LL]))) ? (min((arr_13 [i_0] [i_1] [i_7] [i_8]), (((/* implicit */unsigned long long int) (unsigned short)32422)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_7]))))))));
                            arr_37 [i_0] [i_1] [i_7] [i_8 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)0)), (-4639098707473658560LL)))) == (min((((/* implicit */unsigned long long int) (unsigned short)65535)), (3274004291205475743ULL))))) ? (((((((/* implicit */_Bool) arr_22 [i_8] [i_7] [i_1] [i_0] [i_0])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_1] [i_1] [i_1]))))) + (((/* implicit */long long int) min((((/* implicit */int) arr_6 [i_0])), (var_3)))))) : (((((((/* implicit */_Bool) arr_1 [i_1] [15U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [i_0]))) : (arr_12 [i_0] [i_1] [i_7]))) << (((((((/* implicit */int) arr_32 [i_0] [i_0] [i_7])) << (((219296828) - (219296822))))) - (151511)))))));
                        }
                    } 
                } 
                arr_38 [i_0] = ((/* implicit */long long int) (((!(((_Bool) (unsigned short)33119)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_1]))) > (2916515928U))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_0] [10LL] [i_0]))) % (arr_8 [i_0] [i_0] [i_0] [(unsigned short)7]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 620370075U))))))) : (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 2116043401)), (var_8)))) + (14874345962440882011ULL)))));
                arr_39 [(unsigned short)0] = ((/* implicit */unsigned short) (unsigned char)147);
                arr_40 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (unsigned short)27196);
            }
        } 
    } 
}
