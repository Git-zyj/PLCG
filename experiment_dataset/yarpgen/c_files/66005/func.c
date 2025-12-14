/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66005
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((+(var_17))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_18))))))))));
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_2 [20U] [20U] [20U]))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                {
                    arr_13 [i_4] [i_3] [i_4] = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) arr_10 [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)71)), ((unsigned short)52344)));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)37154)))))));
                                var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_4]))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) 1501713637U);
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned short) min((var_25), (min((arr_7 [i_2] [i_2]), (((/* implicit */unsigned short) var_18))))));
        var_26 = ((/* implicit */unsigned short) (!(((max((((/* implicit */unsigned int) arr_2 [i_2] [i_2] [i_2])), (arr_8 [i_2]))) <= (arr_16 [i_2])))));
    }
    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        var_27 = ((/* implicit */unsigned int) var_0);
        arr_21 [i_7] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 241298944U))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                {
                    var_28 = ((/* implicit */unsigned short) (signed char)-98);
                    arr_27 [i_9] [i_8] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_9])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 15; i_11 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((signed char)-93), (var_5))))));
                                var_30 *= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (+(3450035838U))))))));
                                arr_34 [i_7] [i_9] [i_9] [i_10] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)63915)) ? (((/* implicit */int) (unsigned short)57758)) : (((/* implicit */int) (signed char)89))));
                            }
                        } 
                    } 
                    var_31 -= ((/* implicit */unsigned short) var_12);
                    var_32 = ((/* implicit */signed char) ((((/* implicit */int) min((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)100)))))))) >= (((/* implicit */int) ((unsigned short) max(((unsigned short)25565), ((unsigned short)33357)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_12 = 0; i_12 < 15; i_12 += 3) 
        {
            var_33 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_18))))));
            arr_39 [i_12] [i_12] = ((/* implicit */unsigned short) ((unsigned int) 263968893U));
            arr_40 [i_7] [i_12] = ((/* implicit */unsigned short) (+((((-(735399131U))) * (((unsigned int) (signed char)18))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            var_34 &= (+(735399131U));
            var_35 += ((/* implicit */signed char) (-((+(((/* implicit */int) arr_24 [i_7] [i_7] [i_13]))))));
            arr_45 [i_7] [i_13] [i_13] = ((unsigned short) arr_38 [14U] [i_7] [14U]);
        }
    }
    for (unsigned int i_14 = 3; i_14 < 9; i_14 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 11; i_15 += 1) 
        {
            for (unsigned short i_16 = 1; i_16 < 7; i_16 += 1) 
            {
                {
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) (signed char)-89))));
                    arr_54 [i_15] [i_16] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_44 [i_14] [(unsigned short)1] [i_14 - 1])), ((unsigned short)1426)))))))));
                }
            } 
        } 
        var_37 = ((((/* implicit */_Bool) ((var_19) * (arr_12 [i_14 - 2] [1U] [i_14 + 2])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_47 [i_14 + 1]))))) : (1385962055U));
        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) arr_28 [i_14 - 1] [i_14 - 2]))))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_17 = 0; i_17 < 17; i_17 += 3) 
    {
        for (signed char i_18 = 0; i_18 < 17; i_18 += 1) 
        {
            for (unsigned int i_19 = 0; i_19 < 17; i_19 += 3) 
            {
                {
                    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [10U] [10U] [10U])))))));
                    var_40 = ((/* implicit */unsigned short) ((unsigned int) (+(((((/* implicit */_Bool) 263968893U)) ? (3356085906U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4412))))))));
                    var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60556))))))))));
                }
            } 
        } 
    } 
}
