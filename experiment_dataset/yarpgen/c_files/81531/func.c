/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81531
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
    var_17 = ((/* implicit */unsigned long long int) var_4);
    var_18 = ((/* implicit */unsigned short) ((long long int) min((3152853180564232928ULL), (8038117276273586097ULL))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((int) (unsigned short)50077));
        var_19 = ((/* implicit */long long int) min((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) > (-848804852639515703LL))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) arr_1 [i_0] [(_Bool)1])))) : (((int) arr_1 [16ULL] [i_0])))), (((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_20 &= ((((/* implicit */int) ((_Bool) var_11))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))));
        var_21 &= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))));
    }
    for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 1) 
        {
            arr_12 [11U] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) min((var_9), (((/* implicit */signed char) var_7))))), (arr_8 [i_2] [i_3 - 1])))) > (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (-848804852639515703LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1)))))) && (((/* implicit */_Bool) arr_5 [i_3])))))));
            var_22 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((var_6) << (((((/* implicit */int) var_12)) - (207)))))) ? (((((/* implicit */_Bool) 2410768555582894182LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [12ULL] [i_2]))) : (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [3U]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_3 + 2] [i_3 + 3] [i_3 - 1])))))));
            /* LoopSeq 3 */
            for (unsigned short i_4 = 3; i_4 < 19; i_4 += 1) 
            {
                var_23 = ((((((/* implicit */_Bool) arr_8 [i_3 - 2] [i_3 + 1])) || (((/* implicit */_Bool) max((15293890893145318694ULL), (((/* implicit */unsigned long long int) (signed char)-11))))))) && (((/* implicit */_Bool) var_3)));
                /* LoopSeq 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */signed char) var_2)), (var_10)))), (((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)4))))))) ? (max((((/* implicit */int) var_7)), (min((((/* implicit */int) arr_11 [i_2] [i_4 - 3] [i_4 - 3])), (var_1))))) : (536870911)));
                    arr_19 [i_5] [i_5] [i_5] [i_5] &= ((/* implicit */unsigned short) ((unsigned long long int) var_2));
                    var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (short)7461)) || (((/* implicit */_Bool) 18446744073709551615ULL)))))) ? (((((/* implicit */_Bool) ((int) (signed char)57))) ? (((/* implicit */int) arr_6 [i_5])) : (((/* implicit */int) ((((/* implicit */int) (short)-1)) > (var_11)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2])))))))));
                }
                for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    arr_22 [i_6] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3 - 2] [i_3 + 2] [i_3 + 3] [i_4 - 3])) ? (15293890893145318700ULL) : (arr_20 [i_3] [i_3] [i_3] [i_3] [i_3 - 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4552))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)251)) && (((/* implicit */_Bool) 6940164350200607368ULL)))))));
                    var_26 |= max(((-(((17704326673672269271ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28))))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_21 [i_6] [i_4 - 3])))) != (arr_3 [i_3 + 3])))));
                    var_27 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((10ULL), (((/* implicit */unsigned long long int) 127))))))) : ((-(742417400037282349ULL)))));
                }
                var_28 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(unsigned char)16])) || (((/* implicit */_Bool) arr_5 [i_3]))))) >> (((-5270065487966682108LL) + (5270065487966682116LL)))))) * (((long long int) ((((/* implicit */_Bool) 1849282052)) || (((/* implicit */_Bool) var_11)))))));
            }
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                arr_26 [i_3 - 2] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)15)) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)96))) ^ (2808505850157368740LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-17)))));
                var_29 += ((/* implicit */unsigned int) arr_15 [i_7] [i_2] [i_7] [i_2]);
            }
            for (int i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                arr_31 [i_2] [i_3 - 2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) 17))) / (arr_27 [i_3 - 1])));
                arr_32 [i_8] [(unsigned short)11] [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_3]))))))))) | (((unsigned int) ((((/* implicit */unsigned long long int) 1849282069)) <= (742417400037282344ULL)))));
                var_30 = ((/* implicit */unsigned short) ((742417400037282361ULL) ^ (7185143269124333575ULL)));
                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_24 [i_2]), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) var_0)) : (var_1)))) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) ((11261600804585218049ULL) > (min((((/* implicit */unsigned long long int) arr_28 [(unsigned short)10] [(unsigned short)10] [(unsigned char)14] [i_8])), (17704326673672269271ULL))))))));
            }
            var_32 = arr_15 [i_3 + 2] [i_3 + 3] [i_3 + 1] [i_3 - 2];
        }
        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            arr_37 [i_2] [(_Bool)0] [i_9] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_9] [i_2] [i_2])) || (((/* implicit */_Bool) (unsigned short)28612)))) ? (((/* implicit */int) arr_13 [i_9] [i_9] [i_2])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)42))) >= (2216262084U))))));
            arr_38 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_9])) != (((/* implicit */int) arr_8 [i_2] [i_9]))))) % (((((/* implicit */_Bool) arr_18 [i_2] [i_9])) ? (((/* implicit */int) arr_8 [i_2] [i_9])) : (((/* implicit */int) arr_16 [i_2] [i_2] [i_9] [i_2]))))));
        }
        var_33 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) % (2078705214U)))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))) ^ (var_15))))))));
        arr_39 [i_2] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_2] [i_2] [15ULL])) + (((/* implicit */int) arr_17 [i_2] [i_2] [19U] [i_2] [i_2]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)127)) >> (((1948337215) - (1948337211)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_2] [i_2] [(unsigned char)4] [i_2]))) % (7698634000707226323LL))))), (((/* implicit */long long int) ((1849282069) ^ (1948337234))))));
    }
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        for (long long int i_11 = 0; i_11 < 15; i_11 += 1) 
        {
            {
                arr_46 [i_10] [i_10] = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_5 [i_11]))), (((/* implicit */unsigned long long int) max(((unsigned short)127), (((/* implicit */unsigned short) arr_28 [i_10] [i_10] [10U] [i_11]))))))), (((/* implicit */unsigned long long int) ((arr_10 [i_10]) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_10] [i_10])))))))))));
                arr_47 [i_10] [11] = (~((+(max((((/* implicit */unsigned long long int) var_12)), (var_15))))));
                arr_48 [i_10] [i_11] = ((/* implicit */short) var_5);
            }
        } 
    } 
    var_34 *= ((/* implicit */_Bool) ((long long int) var_5));
}
