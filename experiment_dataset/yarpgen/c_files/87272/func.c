/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87272
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
    var_11 = ((/* implicit */unsigned char) ((var_3) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 2856299933U)) : (-3722066393052007250LL))), (((/* implicit */long long int) (unsigned char)0))))) : (1350345148376176285ULL)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0] [i_0 + 2])), (3947653448U)))) ? (((/* implicit */long long int) min((3441437397U), (((/* implicit */unsigned int) arr_1 [i_0 + 1] [i_0]))))) : (-3722066393052007250LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)53)), (17223619866560751423ULL)))) ? (((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15859))) : (2608873412U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)55077)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0] [i_0 + 2]))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            arr_6 [i_0 - 2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_1 + 1]));
            var_12 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_3 [i_0 - 2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2)))))) ? (((((/* implicit */_Bool) 17223619866560751410ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (arr_3 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -8LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)252)))))));
        }
        for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            arr_9 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 2856299928U))) ? (((/* implicit */int) min(((_Bool)1), (arr_8 [i_0] [i_2] [i_2])))) : (((((/* implicit */_Bool) 4174309214582130190ULL)) ? (((/* implicit */int) (unsigned short)20167)) : (((/* implicit */int) arr_0 [i_0 + 2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((unsigned short) arr_1 [(signed char)2] [i_0 + 2])), ((unsigned short)0))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_0 + 2] [i_0 - 1]))))));
            arr_10 [i_2] [(unsigned short)14] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((arr_1 [i_0 - 2] [i_0 - 2]), (((/* implicit */unsigned short) (unsigned char)55))))), (((long long int) max((((/* implicit */long long int) arr_4 [i_2] [i_0])), (5078664815686702030LL))))));
            var_13 *= max((((/* implicit */unsigned long long int) ((unsigned short) -7828304198963730874LL))), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0 + 1])))));
        }
        for (int i_3 = 4; i_3 < 11; i_3 += 1) 
        {
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_0])) ? (((/* implicit */unsigned long long int) 518619747)) : (min((14652485298287362421ULL), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_3])))))), (max((((/* implicit */unsigned long long int) (unsigned short)18431)), (18446744073709551605ULL))))))));
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) min((4463097134198887645LL), (arr_3 [i_0 + 1] [i_0])))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (16843213229686304202ULL))))), (min((4174309214582130167ULL), (0ULL))))))));
            var_16 = ((/* implicit */unsigned int) (unsigned char)116);
            var_17 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
        }
    }
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (signed char i_6 = 2; i_6 < 13; i_6 += 1) 
            {
                {
                    arr_20 [i_4] [i_6] = ((/* implicit */long long int) 1935918195U);
                    arr_21 [14LL] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned char)6), ((unsigned char)53)))) ? (((/* implicit */int) arr_1 [i_4] [(unsigned char)12])) : (((/* implicit */int) arr_12 [7LL] [(_Bool)1] [11U]))));
                    arr_22 [4LL] [i_5] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_4] [i_6 + 2] [i_5])) ? (arr_18 [i_6 - 2] [i_6 - 1] [i_6] [3ULL]) : (((/* implicit */long long int) arr_7 [i_4] [i_6 + 1] [i_6 + 1])))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [(_Bool)1] [(_Bool)1])), (0ULL)))) ? (((/* implicit */long long int) 701298045U)) : (min((((/* implicit */long long int) (unsigned short)54186)), (-7984116371037413818LL)))))));
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) (_Bool)1))))), (((arr_0 [(unsigned char)9]) ? (arr_17 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_4] [i_4]))))))), (max((((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)0)), (arr_14 [i_4] [i_4])))), (-7690755119352326754LL)))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_19 [i_4] [i_4] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_18 [i_4] [i_4] [i_4] [i_4])))) ? (min((max((((/* implicit */unsigned int) (unsigned short)8)), (arr_7 [i_4] [i_4] [i_4]))), (((/* implicit */unsigned int) ((unsigned short) arr_0 [i_4]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((0ULL), (18446744073709551602ULL)))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) arr_19 [i_4] [2U] [i_4])))))))));
    }
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)255)), (((((/* implicit */_Bool) max((18446744073709551608ULL), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) min(((unsigned short)24638), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) ((_Bool) 1877500698909889378LL)))))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), ((unsigned short)8507)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (min((7690755119352326753LL), (var_5)))))))));
}
