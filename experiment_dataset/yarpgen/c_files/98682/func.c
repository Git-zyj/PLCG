/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98682
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
    var_14 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-106))));
    var_15 = ((/* implicit */unsigned char) max((var_15), (var_9)));
    var_16 = ((/* implicit */unsigned char) ((unsigned long long int) max((max((18106003978163053252ULL), (((/* implicit */unsigned long long int) (signed char)105)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)6698))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) / (408012264998354781ULL))), (((/* implicit */unsigned long long int) (signed char)107))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_7))))) - (min(((~(((/* implicit */int) (signed char)-106)))), (((/* implicit */int) (unsigned char)74))))));
        var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)6698))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_20 = ((/* implicit */signed char) ((unsigned char) (unsigned short)58838));
        arr_6 [(signed char)6] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6698)) - (((/* implicit */int) (unsigned short)51407))));
        var_21 = ((/* implicit */unsigned char) ((_Bool) max(((unsigned short)51407), ((unsigned short)0))));
        arr_7 [i_1] = ((/* implicit */signed char) (~(((((((/* implicit */int) arr_1 [11ULL])) & (((/* implicit */int) arr_5 [i_1] [i_1])))) + (((((/* implicit */int) var_9)) * (((/* implicit */int) (signed char)30))))))));
        var_22 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_9)) | ((+((+(((/* implicit */int) (signed char)-45))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 20; i_2 += 1) 
    {
        for (unsigned char i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 3; i_4 < 20; i_4 += 3) 
                {
                    for (unsigned short i_5 = 1; i_5 < 19; i_5 += 1) 
                    {
                        {
                            var_23 -= ((/* implicit */unsigned short) min(((((_Bool)0) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) (unsigned short)54456)))), (((/* implicit */int) ((signed char) var_13)))));
                            var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    var_25 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)58838)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_9 [i_3 + 3] [i_2 - 2]))))));
                    arr_26 [i_2 - 1] [i_2 - 1] [i_2] [i_2] = ((/* implicit */unsigned char) arr_8 [i_2]);
                }
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    var_26 = ((/* implicit */unsigned short) arr_28 [i_3] [i_2]);
                    var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16220807638398377475ULL)) ? (63ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105)))));
                }
                arr_30 [(unsigned char)18] [i_3 - 1] |= ((/* implicit */long long int) (signed char)127);
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    arr_33 [i_2] [i_2 + 1] [i_3] [i_2] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_6))) >= (var_2))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_3))))) : (arr_27 [i_2] [i_3] [i_8] [i_2])));
                    arr_34 [i_2] [i_2] [i_3 - 1] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_3] [i_2]))));
                }
                /* LoopSeq 4 */
                for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    arr_38 [i_2 - 2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (unsigned short)58838))) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) (unsigned char)255)))))));
                    arr_39 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (~(-2692296467591839902LL)));
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) arr_14 [i_9] [i_9]))))))));
                    arr_40 [i_2] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_9))))));
                    var_29 = ((/* implicit */unsigned short) (((~((~(((/* implicit */int) var_3)))))) / ((~(((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_9)))))))));
                }
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        arr_47 [i_2] [i_2] [i_2] [i_11] [i_2] = ((/* implicit */signed char) (~((+(17131578728959180608ULL)))));
                        arr_48 [i_2 - 2] [i_2 - 2] [i_2] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_2] [i_2])) ^ (((/* implicit */int) ((_Bool) ((2696042815576743625ULL) > (((/* implicit */unsigned long long int) 4824692605315285822LL))))))));
                    }
                    arr_49 [i_2] = ((/* implicit */_Bool) (((~((~(((/* implicit */int) (signed char)105)))))) ^ (((((/* implicit */int) var_8)) | (((/* implicit */int) (unsigned char)14))))));
                    arr_50 [i_2] = ((/* implicit */unsigned short) min(((unsigned char)190), (((/* implicit */unsigned char) (signed char)58))));
                    var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (-7428628214546509607LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned short) (signed char)63))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_32 [i_3] [i_3 + 1] [i_10] [(unsigned char)20])))) : ((~(((/* implicit */int) var_7))))));
                }
                /* vectorizable */
                for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    arr_54 [i_2] [i_2] [i_2] [i_2] = (~(-891694165732246538LL));
                    arr_55 [i_12] [i_2] [i_12] = ((/* implicit */signed char) arr_41 [i_12] [i_2] [i_2] [i_12]);
                    var_31 = ((/* implicit */unsigned short) ((long long int) (+(((/* implicit */int) arr_45 [(unsigned char)14] [i_2] [i_3 + 2] [i_2] [i_2 - 1])))));
                }
                for (unsigned char i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    arr_59 [i_13] [i_13] [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)29)));
                    arr_60 [i_2 - 1] [i_2] [i_2] [i_2] = arr_52 [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 1];
                }
            }
        } 
    } 
}
