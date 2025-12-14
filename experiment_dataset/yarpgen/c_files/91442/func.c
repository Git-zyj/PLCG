/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91442
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
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((9223372036854775788LL) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (15234563423814024358ULL)))) ? (((/* implicit */unsigned long long int) var_13)) : (var_12)));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((0LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_18 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)202))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11162))) : (var_12));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) -7008820037084259795LL))) + (((/* implicit */int) arr_6 [i_2]))));
            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? ((-((+(arr_0 [i_3]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61406))) : (-2801540071056828424LL)))) ? (arr_0 [i_3]) : ((+(-7008820037084259795LL)))))));
            var_21 ^= max((((((arr_3 [i_2] [i_2] [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))))) % (((((/* implicit */_Bool) arr_8 [3])) ? (((/* implicit */unsigned long long int) 8291830111087171378LL)) : (arr_10 [i_2] [i_2] [i_3]))))), (var_5));
            var_22 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))) : (-8291830111087171381LL)))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_8 [i_3])) : (1884519826620492303ULL))));
        }
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    {
                        arr_18 [i_2] [i_4] [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (0LL))) : (((/* implicit */long long int) ((-11) | (((/* implicit */int) (unsigned short)48365))))))), (((var_0) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_5])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)90)))))))));
                        arr_19 [(unsigned short)1] [i_4] [(unsigned short)1] [i_4] [(unsigned short)1] [i_4] = (-(((((/* implicit */_Bool) min((arr_10 [i_6] [i_4] [i_4]), (((/* implicit */unsigned long long int) (unsigned short)441))))) ? (var_9) : (arr_14 [i_2] [i_2] [i_2]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 4; i_7 < 8; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) arr_3 [i_2] [i_2] [i_2]);
                        arr_27 [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] [i_8] [i_2] &= ((/* implicit */unsigned short) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((7008820037084259792LL) | (((/* implicit */long long int) 262143)))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65527)))))), (min((4ULL), (((/* implicit */unsigned long long int) 9223372036854775790LL))))));
            arr_28 [i_2] [6ULL] [6ULL] = ((/* implicit */int) 108086391056891904LL);
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 11; i_9 += 2) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((arr_17 [i_2]) + (((/* implicit */int) var_2))))) % (((((/* implicit */_Bool) (unsigned short)0)) ? (9223372036854775807LL) : (arr_31 [i_9])))));
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_2]))))) ? ((~(((/* implicit */int) (unsigned short)65535)))) : (679873569))))));
            arr_33 [i_9] = ((/* implicit */long long int) 7494844974666630471ULL);
        }
        arr_34 [i_2] = ((/* implicit */int) (unsigned short)9168);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            var_27 = ((/* implicit */long long int) ((arr_22 [i_2] [i_2] [i_10] [i_10]) + (arr_22 [(unsigned short)3] [(unsigned short)3] [i_10] [i_10])));
            var_28 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)7168)) | (arr_23 [(unsigned char)4])))) ? ((~(var_17))) : (((/* implicit */unsigned long long int) var_0)));
            var_29 &= ((/* implicit */unsigned long long int) (unsigned short)14203);
            arr_37 [2] [i_2] [i_2] = arr_20 [i_2] [i_2] [i_2] [i_2];
        }
        var_30 = min(((+(9223354444668731392LL))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_14)) + (9392868034309130456ULL)))) ? (((((/* implicit */_Bool) (unsigned char)90)) ? (var_13) : (-5363275521965877508LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30231))))));
    }
    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)19410))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) + (6495081598012379607ULL))) + (((/* implicit */unsigned long long int) -5659327512329477846LL)))) : (((/* implicit */unsigned long long int) var_6))));
    /* LoopNest 2 */
    for (long long int i_11 = 0; i_11 < 15; i_11 += 2) 
    {
        for (unsigned short i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            {
                var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) (~(max((((/* implicit */unsigned long long int) (unsigned short)65522)), (min((((/* implicit */unsigned long long int) -2128570841)), (6495081598012379609ULL))))))))));
                arr_43 [i_12] [i_11] [i_11] = arr_3 [i_11] [i_11] [i_12];
                var_33 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) min((1214799590), (((/* implicit */int) (unsigned short)59454)))))) | (((((/* implicit */_Bool) max((arr_38 [(unsigned short)0] [(unsigned short)0]), (((/* implicit */unsigned long long int) 6338027169829842509LL))))) ? ((-(var_4))) : (879367788)))));
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)56722)))) ? (var_11) : (var_13)));
}
