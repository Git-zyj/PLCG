/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59770
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
    var_17 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (unsigned short)43829))));
        var_19 = ((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) / (-7382697701171039647LL))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -7382697701171039655LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) : (-8375662712093501679LL)));
        var_20 += ((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) <= (((arr_6 [i_1 - 1]) % (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
        var_22 = ((((/* implicit */int) arr_5 [i_1 - 1])) >> ((((~(((/* implicit */int) arr_5 [i_1 - 1])))) + (22))));
        var_23 = ((/* implicit */_Bool) min((((((/* implicit */long long int) 1385720789U)) | (-8375662712093501679LL))), (((/* implicit */long long int) max((((/* implicit */int) (signed char)84)), (-301280899))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) (short)-2988);
    }
    for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_3 = 2; i_3 < 11; i_3 += 1) /* same iter space */
        {
            arr_13 [i_2] = ((signed char) min((8375662712093501678LL), (((((/* implicit */_Bool) -301280913)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)100))) : (arr_6 [i_3])))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_17 [i_2] [i_2] [i_2] = ((/* implicit */int) arr_11 [i_2]);
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) min(((_Bool)0), ((_Bool)0)))), (((signed char) (_Bool)0)))))) : (min((-8375662712093501678LL), (((/* implicit */long long int) arr_5 [i_3 - 1]))))));
                var_25 = (unsigned short)50176;
                var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) var_5))))) >> (((((/* implicit */int) ((signed char) min((301280913), (((/* implicit */int) (short)-2988)))))) - (57)))));
                var_27 = ((/* implicit */_Bool) ((unsigned short) min((((long long int) arr_0 [i_2])), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_2] [i_4])) * (((/* implicit */int) (_Bool)0))))))));
            }
        }
        /* vectorizable */
        for (short i_5 = 2; i_5 < 11; i_5 += 1) /* same iter space */
        {
            arr_22 [i_2] [i_2] [i_2] = ((/* implicit */signed char) -301280899);
            var_28 = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3882217551344589440LL)));
            var_29 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)0))));
            arr_23 [i_2] [10LL] = var_9;
        }
        /* vectorizable */
        for (short i_6 = 2; i_6 < 11; i_6 += 1) /* same iter space */
        {
            arr_27 [i_2] [i_6] = ((/* implicit */unsigned short) var_6);
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (+(var_16))))));
            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) var_14))));
        }
        var_32 = ((/* implicit */short) arr_21 [i_2] [i_2] [i_2]);
    }
    for (unsigned short i_7 = 1; i_7 < 18; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            for (short i_9 = 2; i_9 < 16; i_9 += 2) 
            {
                {
                    var_33 = ((_Bool) ((unsigned short) ((_Bool) (unsigned short)10780)));
                    var_34 = ((/* implicit */short) min((((/* implicit */unsigned short) (short)28904)), ((unsigned short)10485)));
                    arr_35 [(unsigned short)7] [i_7] [11] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_9])) << (((-6011490257809551072LL) + (6011490257809551078LL)))))) + (((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_11))) >> ((((~(((/* implicit */int) var_14)))) + (11)))))));
                }
            } 
        } 
        arr_36 [i_7] [i_7 - 1] = ((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (((max((-3483064620535874565LL), (((/* implicit */long long int) (unsigned short)10137)))) ^ (var_11)))));
        arr_37 [i_7] [i_7 - 1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((((/* implicit */int) var_14)), (arr_33 [4U] [i_7] [i_7] [i_7])))))) ? (((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) + (((((/* implicit */int) (_Bool)1)) - (arr_33 [4LL] [i_7] [i_7] [i_7]))))) : (max((((/* implicit */int) (unsigned short)36892)), ((-(((/* implicit */int) var_8))))))));
        arr_38 [i_7 + 1] [i_7 + 1] = ((/* implicit */signed char) (((((~(((arr_33 [i_7] [i_7] [i_7] [i_7 - 1]) * (((/* implicit */int) (_Bool)0)))))) + (2147483647))) >> (((6011490257809551071LL) - (6011490257809551049LL)))));
    }
    var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) max((-5068002481115972405LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_9)))) || (((/* implicit */_Bool) ((unsigned short) (signed char)(-127 - 1))))))))))));
}
