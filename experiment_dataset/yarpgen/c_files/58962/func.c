/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58962
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
    var_20 = var_0;
    var_21 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (signed char)-45))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-103)) + (((/* implicit */int) (unsigned short)57706))));
        arr_4 [i_0] [i_0] = (unsigned short)65535;
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_2] [i_1])))))));
                    arr_11 [(unsigned short)1] [i_0] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (signed char)-107))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_23 ^= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)33287))));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)6)) + (((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_0 [i_3])))))))));
                        arr_15 [i_0] [(unsigned short)14] [i_0] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            arr_18 [i_4] [i_0] [(_Bool)0] [i_1] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)14137)) | (((/* implicit */int) (signed char)102))));
                            arr_19 [i_4 + 2] [i_0] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_6 [i_4 + 1] [i_1]);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)91)) * (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_0]))));
                            var_26 = ((/* implicit */_Bool) (unsigned short)18);
                        }
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_0]))));
                            arr_24 [(_Bool)1] [i_6] [i_0] [i_0] [(unsigned short)0] [(signed char)17] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)0))));
                        }
                        var_28 = ((/* implicit */_Bool) ((unsigned short) (!(arr_13 [i_3] [i_2] [i_1] [i_1] [i_0] [(_Bool)1]))));
                    }
                    arr_25 [(signed char)15] [(signed char)17] [i_0] [i_2] = ((/* implicit */_Bool) ((unsigned short) (unsigned short)0));
                }
            } 
        } 
    }
    for (signed char i_7 = 4; i_7 < 18; i_7 += 1) 
    {
        arr_30 [i_7] = ((/* implicit */_Bool) (unsigned short)18373);
        var_29 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_7 [i_7] [i_7 - 3] [i_7 - 1])))), (((((/* implicit */int) (signed char)64)) * (((/* implicit */int) max((arr_12 [i_7] [i_7] [i_7] [i_7] [i_7] [(signed char)5]), ((signed char)66))))))));
    }
    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
    {
        var_30 = (((-(((/* implicit */int) (signed char)-108)))) <= (((((/* implicit */int) (unsigned short)32248)) - (((/* implicit */int) arr_28 [i_8] [i_8])))));
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        var_31 ^= ((/* implicit */_Bool) (signed char)-91);
                        arr_41 [i_8] [i_9] [(unsigned short)11] [i_11] = ((/* implicit */unsigned short) (signed char)-102);
                        arr_42 [i_9] [i_10] [i_10] [i_10] [i_8] [i_11] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)85)) && (((/* implicit */_Bool) (signed char)110))))), (min(((unsigned short)28585), (((/* implicit */unsigned short) (signed char)81))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_12 = 1; i_12 < 11; i_12 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) (signed char)1))))) >> (((/* implicit */int) ((((/* implicit */int) arr_35 [i_9] [i_12])) < (((/* implicit */int) (unsigned short)0)))))));
                        var_33 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (unsigned short i_13 = 1; i_13 < 11; i_13 += 4) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (signed char)-114))))));
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)30900)) * (((/* implicit */int) (unsigned short)65535))));
                    }
                    var_36 = ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) var_16))))));
                    arr_50 [i_10] [(unsigned short)6] [i_9] [i_8] = ((/* implicit */_Bool) ((max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (signed char)-65)))))) / (((/* implicit */int) min(((unsigned short)18440), (arr_27 [i_8]))))));
                    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)33304), (((/* implicit */unsigned short) ((signed char) arr_5 [i_10])))))) >> ((((~(((/* implicit */int) (unsigned short)3567)))) + (3593))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 23; i_14 += 4) 
    {
        arr_53 [(_Bool)1] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned short)53030))))));
        var_38 = (unsigned short)31162;
        var_39 = (unsigned short)3566;
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_40 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)9471))));
        /* LoopNest 2 */
        for (unsigned short i_16 = 2; i_16 < 16; i_16 += 3) 
        {
            for (unsigned short i_17 = 0; i_17 < 17; i_17 += 2) 
            {
                {
                    var_41 -= ((/* implicit */signed char) arr_7 [i_17] [i_16] [i_17]);
                    var_42 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_6 [i_15] [(unsigned short)16]))) * (((/* implicit */int) var_6))));
                }
            } 
        } 
        arr_61 [(unsigned short)9] = (unsigned short)0;
        /* LoopSeq 1 */
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            var_43 = ((/* implicit */unsigned short) (_Bool)1);
            var_44 = arr_59 [i_15] [i_18 - 1] [i_18 - 1];
            var_45 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [(unsigned short)16]))));
            var_46 |= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_18 - 1]))));
        }
        /* LoopNest 2 */
        for (unsigned short i_19 = 0; i_19 < 17; i_19 += 2) 
        {
            for (signed char i_20 = 0; i_20 < 17; i_20 += 4) 
            {
                {
                    arr_72 [i_15] [(unsigned short)1] [(_Bool)0] [i_15] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)16438)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)42221)))) * (((/* implicit */int) (_Bool)1))));
                    arr_73 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)46336)) | (((/* implicit */int) var_18))));
                }
            } 
        } 
    }
    var_47 = ((/* implicit */_Bool) var_16);
}
