/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77889
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_14 += ((/* implicit */unsigned int) ((var_13) >= (((((1737070753U) * (var_10))) * (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)174)))))))));
        var_15 = ((/* implicit */int) max((((/* implicit */unsigned int) (signed char)-47)), ((+(2557896568U)))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) 1737070753U)) || (((/* implicit */_Bool) 3108588056U)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((unsigned int) (!(((/* implicit */_Bool) var_8))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        arr_14 [i_1] [i_1] [(signed char)11] [(signed char)3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) && (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))) == (2233395869U)))));
                        var_17 = ((240402330U) >> (((240402342U) - (240402333U))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            var_18 ^= ((/* implicit */signed char) ((unsigned char) var_8));
            /* LoopNest 2 */
            for (signed char i_6 = 1; i_6 < 23; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) ((short) 3282545614U));
                        arr_21 [i_1] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-50))));
                        arr_22 [i_5] [i_7] [i_6 + 1] [i_5] [20U] [i_5] = 3836510572U;
                        var_20 += ((/* implicit */_Bool) (~(((((/* implicit */int) (short)-14316)) - (((/* implicit */int) (_Bool)0))))));
                    }
                } 
            } 
            var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) (~(var_13))))));
        }
    }
    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (((-(var_10))) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22))))))));
        arr_27 [i_8] = (((+(1909257676U))) * (var_1));
        /* LoopSeq 3 */
        for (unsigned short i_9 = 1; i_9 < 22; i_9 += 1) 
        {
            arr_32 [i_9] [i_9 - 1] [i_9 - 1] = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) 2155369163U)))));
            var_23 |= ((/* implicit */signed char) (-(480395990U)));
            /* LoopNest 2 */
            for (unsigned short i_10 = 1; i_10 < 23; i_10 += 4) 
            {
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    {
                        var_24 -= ((/* implicit */signed char) ((((/* implicit */int) (short)-18498)) | (-726223656)));
                        arr_39 [i_8] [i_10 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)71)) + (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (_Bool)1))))))))));
                    }
                } 
            } 
            var_25 -= min((4294967295U), (((/* implicit */unsigned int) (signed char)-54)));
            arr_40 [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) max(((short)32767), (((/* implicit */short) (signed char)-27)))))));
        }
        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) 
        {
            var_26 = ((/* implicit */int) 4294967295U);
            arr_44 [i_8] [i_12] [i_8] = ((/* implicit */_Bool) (+(((var_6) * (4294967286U)))));
            /* LoopNest 3 */
            for (unsigned int i_13 = 1; i_13 < 23; i_13 += 2) 
            {
                for (unsigned char i_14 = 1; i_14 < 23; i_14 += 2) 
                {
                    for (short i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) ((int) var_11));
                            arr_53 [i_12] [i_12] [i_15] = ((/* implicit */short) min((((/* implicit */unsigned int) var_2)), (var_7)));
                            var_28 = ((/* implicit */signed char) var_4);
                            arr_54 [15U] [15U] [i_14 + 1] [i_12] [15U] [i_14 + 1] [i_14] = ((/* implicit */signed char) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 24; i_16 += 3) 
            {
                for (unsigned int i_17 = 2; i_17 < 22; i_17 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) max((((/* implicit */unsigned int) (unsigned char)24)), (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32749))) - (2355827980U)))))))));
                        var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 717624912U))));
                        var_32 -= ((/* implicit */unsigned int) (signed char)-106);
                    }
                } 
            } 
            arr_60 [i_8] [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) 4042317308U))));
        }
        for (unsigned int i_18 = 0; i_18 < 24; i_18 += 2) 
        {
            arr_64 [(_Bool)1] [i_8] [i_8] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (signed char)121))))));
            var_33 = ((/* implicit */signed char) 2115657663U);
        }
    }
    for (unsigned int i_19 = 0; i_19 < 24; i_19 += 2) /* same iter space */
    {
        arr_67 [i_19] = ((/* implicit */unsigned short) var_4);
        var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) -1549888957)) * (((968714392U) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
    }
    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)255)))))));
    var_36 = ((/* implicit */unsigned int) max((var_36), (4294967295U)));
}
