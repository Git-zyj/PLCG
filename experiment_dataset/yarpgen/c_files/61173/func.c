/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61173
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
    var_14 = ((/* implicit */int) var_9);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)1690))));
        arr_3 [(signed char)2] [(signed char)2] = ((/* implicit */signed char) (~((+(arr_0 [i_0] [i_0])))));
    }
    for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            var_15 &= ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-21))));
            arr_8 [i_2] [i_1 + 3] = ((/* implicit */unsigned short) (signed char)6);
            arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 903018137U)) && (((/* implicit */_Bool) ((min((var_2), (524059100U))) >> (((arr_4 [i_1 - 1]) + (1014098341))))))));
            arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) (signed char)22)))), (((/* implicit */int) (unsigned short)40153))));
            arr_11 [i_1] [i_2] = ((/* implicit */unsigned int) (((~(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 14094268934734738385ULL))))))) == (((/* implicit */int) (_Bool)1))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            var_16 ^= ((/* implicit */unsigned int) ((arr_4 [i_1 + 1]) & ((~(((/* implicit */int) arr_13 [i_3] [2U] [i_3]))))));
            arr_15 [i_3] = ((/* implicit */signed char) var_4);
            var_17 = var_10;
            var_18 = ((((((/* implicit */_Bool) arr_0 [i_3] [i_1])) ? (var_3) : (var_1))) != (((/* implicit */long long int) (~(arr_1 [i_3])))));
            arr_16 [i_1] [i_3] [i_1 + 3] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 3370509064U))))) | ((-(arr_4 [i_1 - 1])))));
        }
        var_19 = ((/* implicit */unsigned char) ((((8710159169620637464ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (arr_5 [i_1] [i_1 + 3])))))) != (((/* implicit */unsigned long long int) (-(arr_6 [i_1] [i_1 + 3]))))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_3))));
        arr_17 [i_1 + 1] [i_1] = (-(((((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 3])) & (((/* implicit */int) arr_7 [i_1 + 2] [i_1 - 1] [i_1 + 3])))));
    }
    for (unsigned int i_4 = 1; i_4 < 10; i_4 += 2) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((((/* implicit */int) var_5)) + (((/* implicit */int) arr_14 [i_4] [(unsigned short)13])))), ((+(arr_4 [i_4 + 2])))))) != (((((/* implicit */_Bool) min((var_5), (arr_18 [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) != (9736584904088914141ULL))))) : (((((/* implicit */_Bool) 2849954223287968714LL)) ? (8710159169620637464ULL) : (((/* implicit */unsigned long long int) 3071468416U)))))))))));
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned short) ((((((2918499011U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((var_12), ((unsigned short)7581)))) : (arr_1 [i_4 + 2]))) << (((((/* implicit */int) (signed char)118)) - (106)))));
    }
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            var_22 *= ((/* implicit */signed char) (unsigned char)56);
            arr_26 [i_6] [(unsigned short)11] = ((/* implicit */unsigned short) (((_Bool)1) ? ((~(5349579930431342640LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            arr_27 [i_5] [i_6] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_6 [i_5] [i_6])))) ? (((/* implicit */unsigned long long int) arr_6 [(unsigned short)0] [i_6])) : (((8710159169620637464ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_5] [i_8])) ? (((/* implicit */long long int) (-(arr_5 [i_5] [i_7])))) : ((+(max((((/* implicit */long long int) arr_22 [8ULL])), (var_1)))))));
                        /* LoopSeq 1 */
                        for (long long int i_10 = 2; i_10 < 14; i_10 += 2) 
                        {
                            var_24 = ((/* implicit */long long int) max((var_24), (min((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_5])) ? (arr_32 [(_Bool)1] [i_10 - 2] [(_Bool)1]) : (arr_22 [i_7])))) + (((var_3) - (((/* implicit */long long int) ((/* implicit */int) var_9))))))), (max((var_4), (((var_3) / (((/* implicit */long long int) ((/* implicit */int) (signed char)126)))))))))));
                            arr_38 [i_5] [i_5] [i_5] [i_5] [i_5] [i_9] [i_5] = ((/* implicit */_Bool) (~(max((9329764680628886331ULL), (((/* implicit */unsigned long long int) arr_14 [i_7 - 1] [i_7]))))));
                            arr_39 [i_9] [i_7 - 1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) -6441626553206334483LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))), ((-(((/* implicit */int) arr_25 [i_5] [i_7 - 1] [i_10 - 2]))))));
                        }
                        arr_40 [(_Bool)1] [(_Bool)1] [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)28787)) != (((/* implicit */int) var_7)))) ? (((((/* implicit */int) (unsigned char)29)) & (((/* implicit */int) (unsigned short)21897)))) : (arr_22 [i_7 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) + (var_3)))))))) : (min((((/* implicit */unsigned long long int) -4081392625850670460LL)), (9736584904088914152ULL)))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-6441626553206334483LL)))) ? (max((arr_31 [1U] [i_8] [i_7 - 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)33207)) : (((/* implicit */int) arr_23 [i_5]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36651)))));
                    }
                } 
            } 
            var_26 ^= ((unsigned short) ((((/* implicit */_Bool) 3187526766642268325ULL)) ? (((/* implicit */int) arr_33 [16] [i_7] [i_7 - 1])) : (arr_22 [i_7 - 1])));
            var_27 = min((-4208568284043466038LL), (((/* implicit */long long int) (+(((/* implicit */int) var_6))))));
        }
        var_28 ^= ((/* implicit */unsigned int) (+(min((-1649656556887140456LL), (((/* implicit */long long int) (unsigned short)9))))));
        arr_41 [i_5] = ((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_5]);
        var_29 ^= ((/* implicit */unsigned short) arr_33 [14LL] [i_5] [i_5]);
    }
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) << (((var_0) - (4633017)))));
    var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (((_Bool)1) ? (((((/* implicit */_Bool) 4950452U)) ? (((/* implicit */unsigned long long int) var_3)) : ((-(4352475138974813230ULL))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1))))))))));
}
