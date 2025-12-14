/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97346
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) -6916247860767876616LL))))) ? (((var_5) ? (arr_0 [11U]) : (((/* implicit */unsigned long long int) -2496709526375907674LL)))) : (((/* implicit */unsigned long long int) var_8))));
        arr_4 [i_0 + 3] = ((/* implicit */int) ((35184355311616ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43633)))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)60308)) ? (arr_9 [i_0] [i_0 + 3] [i_0 + 1]) : (var_12)));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-4893)) ? (var_8) : (((/* implicit */int) var_0))));
                        arr_14 [i_0 + 2] [i_0] [i_1] [12LL] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_7 [i_2 + 1] [i_0 + 2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned int) ((_Bool) arr_0 [i_0 + 3]));
    }
    for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_6 = 1; i_6 < 18; i_6 += 1) 
            {
                arr_24 [i_6] [12] [12] [i_4] &= ((/* implicit */unsigned long long int) ((arr_22 [i_4] [i_5] [i_6 + 2] [i_6]) >> (((var_6) - (17170097225961486263ULL)))));
                var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28793)) ? (((/* implicit */int) var_13)) : ((((_Bool)1) ? (((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) (signed char)48))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17042430230528LL)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) var_7))))) ? (((int) var_11)) : (((/* implicit */int) arr_18 [i_6 + 1]))));
            }
            var_20 = ((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) (unsigned char)136))));
        }
        var_21 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) ((short) arr_20 [(short)14] [2U] [i_4]))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_16 [i_4] [i_4]))))))) ? (((unsigned int) ((((/* implicit */_Bool) 452119890)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_4] [(unsigned char)7] [i_4] [i_4]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) min(((unsigned short)8), (var_9))))))));
        var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned short) (short)3255))))), (((var_1) ? (281200098803712ULL) : (((/* implicit */unsigned long long int) arr_17 [i_4]))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_1)), (arr_20 [i_4] [12U] [12U])))) ? (0ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_4])) - (((/* implicit */int) (signed char)-12)))))))));
        arr_25 [i_4] = min((((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_21 [i_4] [i_4] [i_4] [i_4])), ((unsigned short)34238)))) != ((-(((/* implicit */int) (unsigned char)99))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)120)) ? (415673305U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_4] [i_4])))))) ? (((/* implicit */long long int) var_14)) : (arr_22 [i_4] [i_4] [i_4] [i_4]))));
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                {
                    var_23 ^= ((/* implicit */unsigned long long int) (~(max((0U), (((/* implicit */unsigned int) max(((signed char)-68), ((signed char)-1))))))));
                    arr_30 [i_4] [i_4] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((_Bool)0) ? (98802222) : (((/* implicit */int) (short)-30945)))))));
                    var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1046528ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (33423360U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_8] [i_8]))) : (var_6))))) ^ (min((((/* implicit */unsigned long long int) -1073741824LL)), (min((4996560700613996516ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                }
            } 
        } 
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_34 [i_9] = ((/* implicit */short) (((((_Bool)0) ? (((/* implicit */int) (unsigned short)11970)) : (703897555))) << (((((((/* implicit */_Bool) var_9)) ? (5331198936104846363LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) - (5331198936104846362LL)))));
        var_25 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_26 [i_9] [i_9])) : (arr_28 [i_9] [i_9])))) ? (((((/* implicit */_Bool) -8344774144563533229LL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_9] [i_9])) | (((/* implicit */int) arr_33 [i_9] [i_9]))))))), (((/* implicit */unsigned long long int) ((_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_9] [i_9]))) : (var_14)))))));
        arr_35 [i_9] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)30)) ? (1169421714) : (((/* implicit */int) (signed char)118)))), (((/* implicit */int) ((signed char) arr_17 [i_9])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (var_11) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [(unsigned short)15] [i_9])) ? (((/* implicit */int) arr_21 [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_32 [i_9] [i_9]))))) : (((((/* implicit */_Bool) arr_17 [i_9])) ? (arr_29 [i_9] [i_9] [i_9]) : (((/* implicit */long long int) 1492795301U))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)29488)) >> (((((/* implicit */int) (signed char)48)) - (19)))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_9] [i_9]))) : (7422503772825817619ULL))) : (((((/* implicit */_Bool) arr_17 [7])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_9] [i_9] [i_9] [i_9]))))))));
        arr_36 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_14)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 9708660941069115305ULL)) ? (17528670979597426079ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) (unsigned char)24))))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)16)) | (((/* implicit */int) (unsigned char)52))))))));
    }
    /* LoopNest 2 */
    for (signed char i_10 = 4; i_10 < 23; i_10 += 4) 
    {
        for (int i_11 = 0; i_11 < 25; i_11 += 3) 
        {
            {
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_10 - 1] [i_10 - 3])) ? (1280648002U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (min((((arr_38 [i_10]) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_10]))) : (arr_37 [i_10 + 2] [i_11]))), (((/* implicit */long long int) arr_38 [i_10])))))))));
                arr_41 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_11])) ? (((/* implicit */unsigned int) var_8)) : (arr_40 [i_10])))) ? (524284LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1466453469U)) ? (((/* implicit */int) (short)-28672)) : (((/* implicit */int) var_0)))))))) ? (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))))), (max((var_3), (((/* implicit */signed char) arr_38 [i_11]))))))) : ((+(((var_1) ? (((/* implicit */int) arr_39 [i_11])) : (((/* implicit */int) (unsigned char)76))))))));
                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_40 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */int) arr_39 [i_11]))))) : ((-(3843255902613873055ULL))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2732538349971213698LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17451342991024512204ULL)))) ? (min((2059439427U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) arr_38 [i_11])), (var_3)))))))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */short) var_9);
}
